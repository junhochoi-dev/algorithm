import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            int cnt = 0;
            while(x < w){
                x <<= 1;
                cnt++;
            }
            sb.append(cnt).append('\n');
        }
        System.out.println(sb);
    }
}