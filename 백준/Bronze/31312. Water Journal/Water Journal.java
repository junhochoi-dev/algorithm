import java.io.*;
import java.util.*;

public class Main {
   static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   static StringBuilder sb = new StringBuilder();
   static StringTokenizer st;

   public static void main(String[] args) throws IOException {
      st = new StringTokenizer(br.readLine());
      int N = Integer.parseInt(st.nextToken());
      int A = Integer.parseInt(st.nextToken());
      int B = Integer.parseInt(st.nextToken());

      boolean minimum = false, maximum = false;
      for (int i = 0; i < N - 1; i++) {
         int val = Integer.parseInt(br.readLine());
         if(A == val) minimum = true;
         if(B == val) maximum = true;
      }
      if(minimum && maximum) {
         for (int i = A; i <= B; i++) {
            sb.append(i).append('\n');
         }
      } else if(minimum && !maximum){
         sb.append(B);
      } else if(!minimum && maximum){
         sb.append(A);
      } else {
         sb.append(-1);
      }
      System.out.println(sb);
   }
}