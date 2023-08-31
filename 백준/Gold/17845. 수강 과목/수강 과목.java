import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int[] dp = new int[N + 1];
        int[][] subject = new int[K][2];
        for(int i = 0; i < K; i++){
            st = new StringTokenizer(br.readLine());
            int value = Integer.parseInt(st.nextToken());
            int time = Integer.parseInt(st.nextToken());
            subject[i][0] = time;
            subject[i][1] = value;
        }
        int answer = 0;
        for(int i = 0; i < K; i++){
            for(int j = N; j >= 0; j--){
                if(j == subject[i][0]) dp[j] = Math.max(dp[j], subject[i][1]);
                else{
                    if(j < subject[i][0]) continue;
                    if(dp[j - subject[i][0]] == 0) continue;
                    dp[j] = Math.max(dp[j], dp[j - subject[i][0]] + subject[i][1]);
                }
                answer = Math.max(answer, dp[j]);
            }
        }
        System.out.println(answer);
    }
}