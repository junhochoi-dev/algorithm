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
        int K = Integer.parseInt(st.nextToken());
        int MAX = M * 1000 + K;

        int[][] dp = new int[N + 1][MAX + 1];
        int[] orderList = new int[N + 1];

        for(int i = 1; i <= N; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            orderList[i] = a * 1000 + b;
        }

        int answer = 0;
        for(int i = 1; i <= N; i++){
            for(int j = 0; j <= MAX; j++){
                dp[i][j] = dp[i - 1][j];
                if(j / 1000 > M || j % 1000 > K) continue;

                if(j / 1000 - orderList[i] / 1000 < 0) continue;
                if(j % 1000 - orderList[i] % 1000 < 0) continue;

                dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - orderList[i]] + 1);
                answer = Math.max(answer, dp[i][j]);
            }
        }
        System.out.println(answer);
    }
}