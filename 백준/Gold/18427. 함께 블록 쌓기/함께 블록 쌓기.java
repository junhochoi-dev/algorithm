import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int INF = 987564321;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int H = Integer.parseInt(st.nextToken());

        int dp[][] = new int[N][H + 1];
        ArrayList<HashSet<Integer>> block = new ArrayList<HashSet<Integer>>();

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            block.add(new HashSet<Integer>());
            int size = st.countTokens();
            for (int j = 0; j < size; j++) {
                int b = Integer.parseInt(st.nextToken());
                block.get(i).add(b);
                dp[i][b]++;
            }
            if(i == 0) continue;
            for(int j = 0; j <= H; j++){
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= 10007;
                for(int b: block.get(i)){
                    if(j - b < 0) continue;
                    dp[i][j] += dp[i - 1][j - b];
                    dp[i][j] %= 10007;
                }
            }
        }

        System.out.println(dp[N - 1][H]);
    }
}