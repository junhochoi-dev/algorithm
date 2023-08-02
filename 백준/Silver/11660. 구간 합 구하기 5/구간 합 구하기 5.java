import java.io.*;
import java.util.*;

public class Main{
    static int N, M;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        int[][] arr = new int[N + 1][N + 1];
        int[][] dp = new int[N + 1][N + 1];
        for(int i = 1; i <= N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 1; j <= N; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        dp[1][1] = arr[1][1];
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                dp[i][j] = dp[i - 1][j - 1];
                for(int k = 1; k <= i - 1; k++) dp[i][j] += arr[k][j];
                for(int k = 1; k <= j - 1; k++) dp[i][j] += arr[i][k];
                dp[i][j] += arr[i][j];
            }
        }

        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int lx = Integer.parseInt(st.nextToken()) - 1;
            int ly = Integer.parseInt(st.nextToken()) - 1;
            int rx = Integer.parseInt(st.nextToken());
            int ry = Integer.parseInt(st.nextToken());
            sb.append(dp[rx][ry] + dp[lx][ly] - dp[lx][ry] - dp[rx][ly]).append('\n');
        }
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.append(sb);
        bw.flush();
    }
}