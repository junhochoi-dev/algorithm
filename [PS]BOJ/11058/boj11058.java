import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        long[] dp = new long[N + 1];
        for(int i = 0; i <= N; i++){
            dp[i] = i;
            for(int j = i - 3; j >= 2; j--) dp[i] = Math.max(dp[i], dp[j] * (i - j - 1));
        }
        System.out.println(dp[N]);
    }
}
