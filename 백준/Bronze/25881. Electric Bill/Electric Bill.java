import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int init = Integer.parseInt(st.nextToken());
        int plus = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N; i++) {
            int use = Integer.parseInt(br.readLine());
            sb.append(use).append(" ");
            sb.append(Math.min(1000, use) * init + Math.max(Math.max(1000, use) - 1000, 0) * plus).append('\n');
        }
        System.out.println(sb);
    }
}