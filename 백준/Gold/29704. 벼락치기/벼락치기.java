import java.io.*;
import java.util.*;

public class Main {
   static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   static StringBuilder sb = new StringBuilder();
   static StringTokenizer st;

   public static void main(String[] args) throws IOException {
      st = new StringTokenizer(br.readLine());
      int N = Integer.parseInt(st.nextToken());
      int T = Integer.parseInt(st.nextToken());

      int answer = 0;
      int[][] dp = new int[N + 1][T + 1];
      ArrayList<int[]> problems = new ArrayList<>();
      problems.add(new int[] {0, 0});
      for (int i = 0; i < N; i++) {
         st = new StringTokenizer(br.readLine());
         int d = Integer.parseInt(st.nextToken());
         int p = Integer.parseInt(st.nextToken());
         problems.add(new int[] {d, p});
         answer += p;
      }

      for (int i = 1; i <= N; i++) {
         int d = problems.get(i)[0];
         int p = problems.get(i)[1];
         for (int j = 1; j <= T; j++) {
            dp[i][j] = dp[i - 1][j];
            if(j - d >= 0) dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - d] + p);
         }
      }

      System.out.println(answer - dp[N][T]);
   }
}