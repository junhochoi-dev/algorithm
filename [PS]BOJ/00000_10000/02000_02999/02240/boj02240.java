import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int W = Integer.parseInt(st.nextToken());

        int[][][] dp = new int[N + 1][2][W + 1];
        int[] plum = new int[N + 1];
        for(int i = 1; i <= N; i++) plum[i] = Integer.parseInt(br.readLine()) - 1;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < 2; j++){
                if(i == 0 && j == 1) continue;
                for(int k = 0; k <= W; k++){
                    // 기준 dp[i][j][k]

                    // 정지
                    dp[i + 1][j][k] = Math.max(dp[i + 1][j][k], dp[i][j][k] + (plum[i + 1] == j ? 1 : 0));

                    // 이동
                    if(k == W) continue;
                    dp[i + 1][Math.abs(j - 1)][k + 1] = Math.max(dp[i + 1][Math.abs(j - 1)][k + 1], dp[i][j][k] + (plum[i + 1] == Math.abs(j - 1) ? 1 : 0));
                }
            }
        }

        int answer = 0;
        for(int i = 0; i < 2; i++) for(int j = 0; j <= W; j++) answer = Math.max(answer, dp[N][i][j]);
        System.out.println(answer);
    }
}
