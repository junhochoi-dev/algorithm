import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[][] arr = new int[N][M];
        int[][] dp = new int[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int[] dx = {-1, -1, 0};
        int[] dy = {0, -1, -1};
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                dp[i][j] = arr[i][j];
                for(int k = 0; k < 3; k++){
                    if(i + dx[k] < 0 || j + dy[k] < 0) continue;
                    dp[i][j] = Math.max(dp[i][j], arr[i][j] + dp[i + dx[k]][j + dy[k]]);
                }
            }
        }
        System.out.println(dp[N - 1][M - 1]);
    }
}
