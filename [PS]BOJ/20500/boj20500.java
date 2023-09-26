import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        final int MOD = 1_000_000_007;
        int N = Integer.parseInt(br.readLine());
        int[][] dp = new int[N + 1][3];
        dp[1][2] = 1;
        for(int i = 2; i <= N; i++){
            for(int j = 0; j < 3; j++){
                dp[i][j] += dp[i - 1][(6 + j - 5) % 3];
                dp[i][j] %= MOD;
                dp[i][j] += dp[i - 1][(3 + j - 1) % 3];
                dp[i][j] %= MOD;
            }
        }
        System.out.println(dp[N][0]);
    }
}