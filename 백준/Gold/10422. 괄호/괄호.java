import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int size = 5000;
        long mod = 1_000_000_007;
        long[][] dp = new long[size + 1][2];
        dp[2][0] = dp[4][0] = dp[4][1] = 1;
        for(int i = 6; i <= size; i += 2){
            dp[i][0] = dp[i - 2][0] + dp[i - 2][1];
            dp[i][0] %= mod;
            for(int j = 2; j < i; j += 2){
                dp[i][1] += ((dp[i - j][0] + dp[i - j][1]) % mod) * dp[j][0];
                dp[i][1] %= mod;
            }
        }
        for(int i = 0; i < N; i++){
            int L = Integer.parseInt(br.readLine());
            System.out.println((dp[L][0] + dp[L][1]) % mod);
        }
    }
}