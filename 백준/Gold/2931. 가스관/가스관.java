// java.util.* 라이브러리 import
import java.util.*;
//java.io.* 라이브러리 import
import java.io.*;

// start of class
public class Main {
    // 여러 출력의 시간 소모를 줄이기 위한 StringBuilder 호출
    static StringBuilder sb = new StringBuilder();

    // 설계도면 가로 세로 및 방향 선언
    static int R, C, ansx, ansy, answer;
    // 집, 유치원 일차원화 선언
    static int M, Z;
    // 설계 도면 선언
    static char[][] arr;

    // 방향을 숫자로 변환하는 HashMap 생성
    static HashMap<Character, Integer> directionToNum = new HashMap<Character, Integer>();
    static HashMap<Integer, Character> numToDirection = new HashMap<Integer, Character>();

    // 방문 여부 확인 HashSet 선언

    // 방향에 따른 dx 설정
    static int[][] direction_dx = {
            {1, -1}, // '|'
            {0, 0}, // '-'
            {1, -1, 0, 0}, // '+'
            {0, 1}, // '1'
            {0, -1}, // '2'
            {0, -1}, // '3'
            {0, 1}, // '4'
    };
    // 방향에 따른 dy 설정
    static int[][] direction_dy = {
            {0, 0}, // '|'
            {1, -1}, // '-'
            {0, 0, 1, -1}, // '+'
            {1, 0}, // '1'
            {1, 0}, // '2'
            {-1, 0}, // '3'
            {-1, 0}, // '4'
    };

    // 맞는 칸 찾기
    static void findRoute(int x, int y, int pdx, int pdy) {
        // 초기화
        boolean up = true;
        boolean down = true;
        boolean left = true;
        boolean right = true;

        // 위로 불가
        if(x - 1 < 0) up = false;
        else if("145".contains(String.valueOf(directionToNum.get(arr[x - 1][y])))) up = false;
        else if(arr[x - 1][y] == '.' || arr[x - 1][y] == 'M' || arr[x - 1][y] == 'Z') up = false;

        // 아래로 불가
        if(x + 1 >= R) down = false;
        else if("136".contains(String.valueOf(directionToNum.get(arr[x + 1][y])))) down = false;
        else if(arr[x + 1][y] == '.' || arr[x + 1][y] == 'M' || arr[x + 1][y] == 'Z') down = false;

        // 왼쪽 불가
        if(y - 1 < 0) left = false;
        else if("056".contains(String.valueOf(directionToNum.get(arr[x][y - 1])))) left = false;
        else if(arr[x][y - 1] == '.' || arr[x][y - 1] == 'M' || arr[x][y - 1] == 'Z') left = false;

        // 오른쪽 불가
        if(y + 1 >= C) right = false;
        else if("034".contains(String.valueOf(directionToNum.get(arr[x][y + 1])))) right = false;
        else if(arr[x][y + 1] == '.' || arr[x][y + 1] == 'M' || arr[x][y + 1] == 'Z') right = false;

        // 아래로 입장
        if(pdx == 1 && pdy == 0) {
            if(down && left && right) answer = 2;
            else if(!down && !left && right) answer = 4;
            else if(down && !left && !right) answer = 0;
            else if(!down && left && !right) answer = 5;
        }
        // 위로 입장
        if(pdx == -1 && pdy == 0) {
            if(up && left && right) answer = 2;
            else if(!up && !left && right) answer = 3;
            else if(up && !left && !right) answer = 0;
            else if(!up && left && !right) answer = 6;
        }
        // 우측 입장
        if(pdx == 0 && pdy == 1) {
            if(up && down && right) answer = 2;
            else if(!up && !down && right) answer = 1;
            else if(up && !down && !right) answer = 5;
            else if(!up && down && !right) answer = 6;
        }
        // 좌측 입장
        if(pdx == 0 && pdy == -1) {
            if(up && down && left) answer = 2;
            else if(!up && !down && left) answer = 1;
            else if(up && !down && !left) answer = 4;
            else if(!up && down && !left) answer = 3;
        }
    }

    static void DFS(int x, int y, int pdx, int pdy) {
        // 없어진 블록 칸일 때
        if(arr[x][y] == '.') {
            ansx = x;
            ansy = y;
            findRoute(x, y, pdx, pdy);
            return;
        }

        int curr_direction = directionToNum.get(arr[x][y]);
        int[] dx = direction_dx[curr_direction];
        int[] dy = direction_dy[curr_direction];


        for(int k = 0; k < dx.length; k++) {
            // 다음 칸 행 저장
            int tx = x + dx[k];
            // 다음 칸 열 저장
            int ty = y + dy[k];

            // 다음 칸 일차원화
            int next = tx * C + ty;
            // 범위 밖 이동 필터링
            if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
            // 전으로 이동 필터링
            if(tx == x - pdx && ty == y - pdy) continue;
            // Block '+' 은 특별한 블록으로 수직, 수평의 두 방향으로 모두 지나가야만 한다.
            if(curr_direction == 2 && (pdx != dx[k] || pdy != dy[k])) continue;
            // 다음 칸으로 이동
            DFS(tx, ty, dx[k], dy[k]);
        }
    }

    // start of main
    public static void main(String[] args) throws IOException {
        // 한 줄 입력을 위한 BufferedReader 호출
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // 한 줄을 split하여 변수를 가져오기 위한 StringTokenizer 호출
        StringTokenizer st;

        // directionToNum, numToDirection 초기화
        String direction = "|-+1234";
        for(int i = 0; i < 7; i++) {
            directionToNum.put(direction.charAt(i), i);
            numToDirection.put(i, direction.charAt(i));
        }

        // 한 줄 입력
        st = new StringTokenizer(br.readLine());

        // 설계도면 가로 입력
        R = Integer.parseInt(st.nextToken());
        // 설계도면 세로 입력
        C = Integer.parseInt(st.nextToken());

        // 설계 도면 생성
        arr = new char[R][C];

        // 집, 유치원 위치 초기화
        M = 0;
        Z = 0;

        for(int i = 0; i < R; i++) {
            // 한 줄 입력을 임시변수 tmp에 저장
            String tmp = br.readLine();
            // 각 칸 arr에 저장
            for(int j = 0; j < C; j++) {
                // tmp에 저장했던 칸 저장
                arr[i][j] = tmp.charAt(j);
                // 집 위치 일차원화 저장
                if(arr[i][j] == 'M') M = i * C + j;
                // 유치원 위치 일차원화 저장
                if(arr[i][j] == 'Z') Z = i * C + j;
            }
        }
        // 네 방향 배열 저장
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};
        // 네 방향 확인후 접근
        for(int k = 0; k < 4; k++) {
            // 다음 좌표 저장
            int tx = M / C + dx[k];
            int ty = M % C + dy[k];
            // 다음 좌표 일차원화
            int next = tx * C + ty;
            // 범위 밖 필터링
            if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
            // 빈칸 이동 필터링
            if(arr[tx][ty] == '.') continue;
            //
            String next_direction = String.valueOf(directionToNum.get(arr[tx][ty]));
            if(dx[k] == 0) {
                // 우측 출발 지점 다음 루트
                if(dy[k] == 1 && "1256".contains(next_direction)) {
                    // DFS 시작
                    DFS(tx, ty, dx[k], dy[k]);
                }
                // 좌측 출발 지점 다음 루트
                if(dy[k] == -1 && "1234".contains(next_direction)) {
                    // DFS 시작
                    DFS(tx, ty, dx[k], dy[k]);
                }
            }
            if(dy[k] == 0) {
                // 아래 출발 지점 다음 루트
                if(dx[k] == 1 && "0245".contains(next_direction)) {
                    // DFS 시작
                    DFS(tx, ty, dx[k], dy[k]);
                }
                // 위 출발 지점 다음 루트
                if(dx[k] == -1 && "0236".contains(next_direction)) {
                    // DFS 시작
                    DFS(tx, ty, dx[k], dy[k]);
                }
            }
        }
        // 테스트 케이스 답 저장
        sb.append(ansx + 1).append(" ").append(ansy + 1).append(" ").append(numToDirection.get(answer)).append('\n');
        // 전체 테스트 케이스 출력
        System.out.println(sb);
    } // end of main
} // end of class