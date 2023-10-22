import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        String files[] = new String[N];
        for(int i = 0; i < N; i++){
            files[i] = br.readLine();
        }
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken()) - 1;
            int e = Integer.parseInt(st.nextToken()) - 1;
            for(int i = s; i <= e; i++){
                sb.append(files[i]).append('\n');
            }
        }
        System.out.println(sb);
    }
}