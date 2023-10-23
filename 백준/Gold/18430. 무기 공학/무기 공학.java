import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int dx[][] = {{1, 0}, {1, 0}, {-1, 0}, {-1, 0}};
    static int dy[][] = {{0, 1}, {0, -1}, {0, 1}, {0, -1}};
    static int N, M, answer = 0;
    static boolean visited[][];
    static int arr[][];
    static void backtracking(int std, int sum){
        answer = Math.max(answer, sum);
        if(std == N * M) return;
        int x = std / M;
        int y = std % M;
        if(visited[x][y]) backtracking(std + 1, sum);
        else {
            for(int k = 0; k < 4; k++){
                boolean able = true;
                for(int c = 0; c < 2; c++){
                    int tx = x + dx[k][c];
                    int ty = y + dy[k][c];
                    if(tx < 0 || ty < 0 || tx >= N || ty >= M) {
                        able = false;
                        break;
                    }
                    if(visited[tx][ty]) able = false;
                }
                if(!able) continue;

                visited[x][y] = true;
                visited[x + dx[k][0]][y + dy[k][0]] = true;
                visited[x + dx[k][1]][y + dy[k][1]] = true;
                backtracking(std + 1, sum + arr[x][y] * 2 + arr[x + dx[k][0]][y + dy[k][0]] + arr[x + dx[k][1]][y + dy[k][1]]);
                visited[x][y] = false;
                visited[x + dx[k][0]][y + dy[k][0]] = false;
                visited[x + dx[k][1]][y + dy[k][1]] = false;
            }
            backtracking(std + 1, sum);
        }
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        arr = new int[N][M];
        visited = new boolean[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        backtracking(0, 0);

        System.out.println(answer);
    }
}