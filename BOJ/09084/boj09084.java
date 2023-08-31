import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            int N = Integer.parseInt(br.readLine());
            int[] coin = new int[N];
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++) coin[i] = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(br.readLine());
            int[][] dp = new int[N][M + 1];
            for(int i = 0; i < N; i++){
                for(int j = 0; j <= M; j++){
                    for(int k = 0; coin[i] * k <= M; k++){
                        if(j == coin[i] * k) dp[i][j]++;
                        else{
                            if(j < coin[i] * k || i - 1 < 0) continue;
                            dp[i][j] += dp[i - 1][j - coin[i] * k];
                        }
                    }
                }
            }
            sb.append(dp[N - 1][M]).append('\n');
        }
        System.out.println(sb);
    }
}