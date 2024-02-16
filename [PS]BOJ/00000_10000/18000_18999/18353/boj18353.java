import java.io.*;
import java.util.*;

public class Main{
    StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        int[] dp = new int[N];
        int exclude = 0;
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
        dp[0] = 1;
        for(int i = 1; i < N; i++){
            int maximum = 0;
            for(int j = 0; j < i; j++){
                if(arr[j] > arr[i] && dp[j] > maximum) maximum = dp[j];
            }
            dp[i] = maximum + 1;
            exclude = Math.max(exclude, dp[i]);
        }
        System.out.println(N == 1 ? 0 : N - exclude);
    }
}
