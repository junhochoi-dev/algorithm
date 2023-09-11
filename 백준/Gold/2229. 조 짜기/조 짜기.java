import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());

        int[] arr = new int[N + 1];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++) arr[i] = Integer.parseInt(st.nextToken());

        int[] dp = new int[N + 1];
        for(int i = 1; i <= N; i++){
            dp[i] = dp[i - 1];
            for(int j =  i - 1; j > 0; j--){
                dp[i] = Math.max(dp[i], Math.abs(arr[i] - arr[j]) + dp[j - 1]);
            }
        }
        System.out.println(dp[N]);
    }
}
