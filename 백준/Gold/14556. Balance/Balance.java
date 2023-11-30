import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        long[] dp = new long[N + 1];
        dp[1] = 1;
        for(int i = 2; i <= N; i++){
            dp[i] = (2 * i - 1) * dp[i - 1];
            dp[i] %= 1_000_000_000 + 9;
        }
        System.out.println(dp[N]);
    }
}