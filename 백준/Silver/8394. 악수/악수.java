import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[10_000_000 + 1];
        dp[2] = 2;
        dp[3] = 3;
        for(int i = 4; i <= N; i++){
            dp[i] = dp[i - 2] + dp[i - 1];
            dp[i] %= 10;
        }
        System.out.println(dp[N]);
    }
}