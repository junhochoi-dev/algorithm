import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[][] dp = new int[M][26];
        for (int i = 0; i < 26; i++) {
            dp[0][i] = 1;
        }
        int MOD = 1_000_000_000 + 7;
        for (int i = 1; i < M; i++) {
            for (int j = 0; j < 26; j++) {
                for (int k = 0; k < 26; k++) {
                    if(Math.abs(j - k) >= N) dp[i][j] += dp[i - 1][k];
                    dp[i][j] %= MOD;
                }
            }
        }
        int answer = 0;
        for (int i = 0; i < 26; i++) {
            answer += dp[M - 1][i];
            answer %= MOD;
        }
        System.out.println(answer);
    }
}