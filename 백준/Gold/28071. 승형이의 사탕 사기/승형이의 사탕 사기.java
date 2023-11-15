import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        int answer = 0;
        int[][] dp = new int[M + 1][K];
        ArrayList<Integer> arr = new ArrayList<Integer>();
        HashSet<Integer> used = new HashSet<Integer>();

        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) {
            int candy = Integer.parseInt(st.nextToken());
            if(!used.contains(candy)) arr.add(candy);

            used.add(candy);
            dp[1][candy % K] = Math.max(dp[1][candy % K], candy);
            answer = Math.max(answer, dp[1][0]);
        }

        for(int i = 2; i <= M; i++){
            for(int j = 0; j < K; j++){
                for(int n = 0; n < arr.size(); n++){
                    if(dp[i - 1][(K + j - (arr.get(n) % K)) % K] == 0) continue;
                    dp[i][j] = Math.max(dp[i][j], dp[i - 1][(K + j - (arr.get(n) % K)) % K] + arr.get(n));
                }
                if(j == 0) answer = Math.max(answer, dp[i][j]);
            }
        }

        System.out.println(answer);
    }
}