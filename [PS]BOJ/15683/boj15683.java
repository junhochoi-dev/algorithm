import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, M;
    static int answer = Integer.MAX_VALUE;
    static int[] dx = {1, 0, -1, 0};
    static int[] dy = {0, 1, 0, -1};
    static int[][] arr, visited;

    static void blindspot(){
        int temp = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(arr[i][j] != 6 && visited[i][j] == 0) temp++;
            }
        }
        answer = Math.min(answer, temp);
    }
    static void visit_on(int x, int y, int direction){
        int tx = x + dx[direction];
        int ty = y + dy[direction];
        while(true){
            if(tx < 0 || ty < 0 || tx >= N || ty >= M) break;
            if(arr[tx][ty] == 6) break;
            visited[tx][ty]++;
            tx += dx[direction];
            ty += dy[direction];
        }
    }
    static void visit_off(int x, int y, int direction){
        int tx = x + dx[direction];
        int ty = y + dy[direction];
        while(true){
            if(tx < 0 || ty < 0 || tx >= N || ty >= M) break;
            if(arr[tx][ty] == 6) break;
            visited[tx][ty]--;
            tx += dx[direction];
            ty += dy[direction];
        }
    }

    static void backtracking(int curr){
        if(curr == N * M) {
            blindspot();
            return;
        }
        int x = curr / M;
        int y = curr % M;

        if(arr[x][y] % 6 == 0) backtracking(curr + 1);
        else{
            visited[x][y]++;

            if(arr[x][y] == 1) {
                for(int k = 0; k < 4; k++){
                    visit_on(x, y, k);
                    backtracking(curr + 1);
                    visit_off(x, y, k);
                }
            }
            if(arr[x][y] == 2) {
                for(int k = 0; k < 2; k++){
                    visit_on(x, y, k);
                    visit_on(x, y, k + 2);
                    backtracking(curr + 1);
                    visit_off(x, y, k);
                    visit_off(x, y, k + 2);
                }
            }
            if(arr[x][y] == 3) {
                for(int k = 0; k < 4; k++){
                    visit_on(x, y, k);
                    visit_on(x, y, (k + 1) % 4);
                    backtracking(curr + 1);
                    visit_off(x, y, k);
                    visit_off(x, y, (k + 1) % 4);
                }
            }
            if(arr[x][y] == 4) {
                for(int k = 0; k < 4; k++){
                    for(int selected = 0; selected < 4; selected++) {
                        if(selected == k) continue;
                        visit_on(x, y, selected);
                    }
                    backtracking(curr + 1);
                    for(int selected = 0; selected < 4; selected++) {
                        if(selected == k) continue;
                        visit_off(x, y, selected);
                    }
                }
            }
            if(arr[x][y] == 5) {
                for(int k = 0; k < 4; k++){
                    visit_on(x, y, k);
                }
                backtracking(curr + 1);
                for(int k = 0; k < 4; k++){
                    visit_off(x, y, k);
                }
            }
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        arr = new int[N][M];
        visited = new int[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        backtracking(0);
        System.out.println(answer);
    }
}
