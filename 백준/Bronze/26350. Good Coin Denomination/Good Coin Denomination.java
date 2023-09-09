import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int i = 0; i < T; i++){
            sb.append("Denominations: ");
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            boolean able = true;
            int prev = 0;
            for(int j = 0; j < N; j++){
                int curr = Integer.parseInt(st.nextToken());
                sb.append(curr).append(" ");
                if(prev * 2 > curr) able = false;
                prev = curr;
            }
            sb.append('\n');
            sb.append(able ? "Good" : "Bad").append(" coin denominations! ");
            sb.append("\n");
            sb.append("\n");
        }
        System.out.println(sb);
    }
}