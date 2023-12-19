import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int[] dp = new int[N];
        Arrays.fill(dp, Integer.MAX_VALUE);

        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        dp[0] = 0;
        for (int i = 0; i < N; i++) {
            if(dp[i] == Integer.MAX_VALUE) continue;
            for(int j = i + 1; j < Math.min(N, i + arr[i] + 1); j++){
                dp[j] = Math.min(dp[i] + 1, dp[j]);
            }
        }
        System.out.println(dp[N - 1] == Integer.MAX_VALUE ? -1 : dp[N - 1]);
    }
}
