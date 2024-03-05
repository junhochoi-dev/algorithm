import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        long[] loc = new long[N + 1];
        long[] sum = new long[N + 1];
        long[] able = new long[N + 1];
        for (int i = 0; i <= N; i++) {
            st = new StringTokenizer(br.readLine());
            long l = Long.parseLong(st.nextToken());
            long e = Long.parseLong(st.nextToken());
            loc[i] = l; sum[i] = e;
            if(i != 0) sum[i] += sum[i - 1];
            if(i != 0) able[i] = sum[i - 1] - loc[i];
        }
        boolean impossible = false;
        int index = 0;
        for (int i = 1; i <= N; i++) {
            if(able[i] < 0) impossible = true;
            if(impossible){
                sb.append(-1).append(" ").append(-1).append('\n');
            } else {
                sb.append(index).append(" ").append(able[i]).append('\n');
            }
            if(able[i] == 0) index = i;
        }
        System.out.println(sb);
    }
}