import java.io.*;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append('#').append(t).append(' ');
            int N = Integer.parseInt(br.readLine());

            int[] arr = new int[N];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());

            int answer = 1;

            int[] dp = new int[N];
            Arrays.fill(dp, 1);
            for (int i = 0; i < N; i++) {
                for(int j = i - 1; j >= 0; j--){
                    if(arr[j] < arr[i]){
                        dp[i] = Math.max(dp[i], dp[j] + 1);
                    }
                }
                answer = Math.max(answer, dp[i]);
            }
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}