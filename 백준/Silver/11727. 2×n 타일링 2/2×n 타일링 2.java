import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[N + 1];
        dp[1] = 1;
        if(N != 1) dp[2] = 3;
        for(int i = 3; i <= N; i++){
            dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
        }
        System.out.println(dp[N] % 10007);
    }
}
