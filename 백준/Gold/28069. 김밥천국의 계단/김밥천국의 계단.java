import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        int[] dp = new int[N + 1];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[0] = 0;
        for (int i = 0; i <= N; i++) {
            if(i + 1 <= N) dp[i + 1] = Math.min(dp[i + 1], dp[i] + 1);
            if(i + i / 2 <= N) dp[i + i / 2] = Math.min(dp[i + i / 2], dp[i] + 1);
        }
        System.out.println(dp[N] <= K ? "minigimbob" : "water");
    }
}