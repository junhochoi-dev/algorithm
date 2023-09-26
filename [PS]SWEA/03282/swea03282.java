import java.io.*;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());

            int[][] thing = new int[N][2];
            int[][] dp = new int[N][K + 1];

            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                thing[i][0] = Integer.parseInt(st.nextToken());
                thing[i][1] = Integer.parseInt(st.nextToken());
                dp[i][thing[i][0]] = thing[i][1];
            }
            for(int i = 1; i < N; i++){
                for(int j = 0; j <= K; j++){
                    dp[i][j] = dp[i - 1][j];
                    if(j < thing[i][0]) continue;
                    dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - thing[i][0]] + thing[i][1]);
                }
            }
            int maximum = 0;
            for(int i = 0; i <= K; i++) maximum = Math.max(maximum, dp[N - 1][i]);
            sb.append(maximum).append('\n');
        }
        System.out.println(sb);
    }
}

