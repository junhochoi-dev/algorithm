import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int[] weight = new int[4];
        for(int i = 1; i <= 3; i++) weight[i] = Integer.parseInt(st.nextToken());

        int temp = weight[2];
        weight[2] = weight[3];
        weight[3] = temp;

        int K = Integer.parseInt(st.nextToken());

        int[][] dp = new int[4][K + 1];
        for(int i = 0; i < 4; i++) Arrays.fill(dp[i], Integer.MAX_VALUE);
        dp[0][0] = 0;

        for (int i = 0; i <= K; i++) {
            for (int j = 0; j < 4; j++) {
                for(int k = 1; k <= 3; k++){
                    if(i - weight[k] < 0) continue;
                    if(dp[(4 + j - k) % 4][i - weight[k]] == Integer.MAX_VALUE) continue;
                    dp[j][i] = Math.min(dp[j][i], dp[(4 + j - k) % 4][i - weight[k]] + 1);
                }
            }
        }

        System.out.println(dp[0][K] == Integer.MAX_VALUE ? -1 : dp[0][K]);
    }
}