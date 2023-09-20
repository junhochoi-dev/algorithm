import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        long[] gx = new long[1_000_000 + 1];
        for (int i = 1; i <= 1_000_000; i++) {
            for(int j = 1; i * j <= 1_000_000 ; j++){
                gx[i * j] += j;
            }
        }
        for (int i = 1; i <= 1_000_000; i++) {
            gx[i] += gx[i - 1];
        }
        for (int t = 0; t < T; t++) {
            int N = Integer.parseInt(br.readLine());
            sb.append(gx[N]).append('\n');
        }
        System.out.println(sb);
    }
}