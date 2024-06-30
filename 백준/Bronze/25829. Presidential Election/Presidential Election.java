import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int sum_v1 = 0, sum_v2 = 0;
        int sum_e1 = 0, sum_e2 = 0;
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int e = Integer.parseInt(st.nextToken());
            int v1 = Integer.parseInt(st.nextToken());
            int v2 = Integer.parseInt(st.nextToken());
            if(v1 > v2) sum_e1 += e;
            if(v1 < v2) sum_e2 += e;
            sum_v1 += v1;
            sum_v2 += v2;
        }
        if(sum_v1 > sum_v2 && sum_e1 > sum_e2) System.out.println(1);
        else if(sum_v1 < sum_v2 && sum_e1 < sum_e2) System.out.println(2);
        else System.out.println(0);
    }
}