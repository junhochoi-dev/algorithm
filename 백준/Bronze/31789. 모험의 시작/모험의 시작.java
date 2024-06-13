import java.io.*;
import java.util.*;

public class Main {
   static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   static StringBuilder sb = new StringBuilder();
   static StringTokenizer st;

   public static void main(String[] args) throws IOException {
      int N = Integer.parseInt(br.readLine());
      st = new StringTokenizer(br.readLine());
      int X = Integer.parseInt(st.nextToken());
      int S = Integer.parseInt(st.nextToken());
      int answer = 0;
      for (int i = 0; i < N; i++) {
         st = new StringTokenizer(br.readLine());
         int c = Integer.parseInt(st.nextToken());
         int p = Integer.parseInt(st.nextToken());
         if(X >= c) answer = Math.max(answer, p);
      }
      System.out.println(S < answer ? "YES" : "NO");
   }
}