import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int[] dx = {1, 0, -1, 0};
        int[] dy = {0, 1, 0, -1};

        // 0 아래
        // 1 오른쪽
        // 2 위
        // 3 왼쪽

        int N = Integer.parseInt(br.readLine());
        int s = -1, e = -1;
        int[][][] cnt = new int[N][N][4];
        char[][] arr = new char[N][N];
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            for(int j = 0; j < N; j++){
                for(int k = 0; k < 4; k++){
                    cnt[i][j][k] = Integer.MAX_VALUE;
                }
                arr[i][j] = temp.charAt(j);
                if(arr[i][j] == '#'){
                    if(s == -1) s = i * N + j;
                    else e = i * N + j;
                }
            }
        }

        Queue<int[]> queue = new ArrayDeque<>();
        for(int k = 0; k < 4; k++) cnt[s / N][s % N][k] = 0;
        for(int k = 0; k < 4; k++) queue.add(new int[]{s, k});
        while(!queue.isEmpty()){
            int[] curr = queue.poll();
            int x = curr[0] / N;
            int y = curr[0] % N;
            int direction = curr[1];

            int tx = x + dx[direction];
            int ty = y + dy[direction];

            if(tx >= 0 && ty >= 0 && tx < N && ty < N){
                if(arr[tx][ty] != '*'){
                    if(cnt[tx][ty][direction] > cnt[x][y][direction]){
                        cnt[tx][ty][direction] = cnt[x][y][direction];
                        queue.add(new int[]{tx * N + ty, direction});
                    }
                }
            }

            // !
            if(arr[x][y] != '!') continue;

            tx = x + dx[(direction + 1) % 4];
            ty = y + dy[(direction + 1) % 4];
            if(tx >= 0 && ty >= 0 && tx < N && ty < N){
                if(arr[tx][ty] != '*'){
                    if(cnt[tx][ty][(direction + 1) % 4] > cnt[x][y][direction] + 1){
                        cnt[tx][ty][(direction + 1) % 4] = cnt[x][y][direction] + 1;
                        queue.add(new int[]{tx * N + ty, (direction + 1) % 4});
                    }
                }
            }

            tx = x + dx[(4 + direction - 1) % 4];
            ty = y + dy[(4 + direction - 1) % 4];
            if(tx >= 0 && ty >= 0 && tx < N && ty < N){
                if(arr[tx][ty] != '*'){
                    if(cnt[tx][ty][(4 + direction - 1) % 4] > cnt[x][y][direction] + 1){
                        cnt[tx][ty][(4 + direction - 1) % 4] = cnt[x][y][direction] + 1;
                        queue.add(new int[]{tx * N + ty, (4 + direction - 1) % 4});
                    }
                }
            }
        }

        int answer = Integer.MAX_VALUE;
        for(int k = 0; k < 4; k++) answer = Math.min(answer, cnt[e / N][e % N][k]);
        System.out.println(answer);

    }
}
