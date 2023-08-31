import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for (int t = 0; t < T; t++) {
            int N = Integer.parseInt(br.readLine());
            int[] coin = new int[N + 1];
            st = new StringTokenizer(br.readLine());
            for (int i = 1; i <= N; i++)
                coin[i] = Integer.parseInt(st.nextToken());

            int M = Integer.parseInt(br.readLine());
            int[][] dp = new int[N + 1][M + 1];
            for (int i = 1; i <= N; i++) {
                for (int j = 0; j <= M; j++) {
                    dp[i][j] = dp[i - 1][j];
                    for (int k = j / coin[i]; k > 0; k--) {
                        if (j == coin[i] * k)
                            dp[i][j]++;
                        else
                            dp[i][j] += dp[i - 1][j - coin[i] * k];
                    }
                }
            }
            System.out.println(dp[N][M]);
        }
    }
}