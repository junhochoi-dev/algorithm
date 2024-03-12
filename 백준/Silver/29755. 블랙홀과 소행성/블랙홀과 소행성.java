import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[] b = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            b[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(b);

        int P = 0;
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            int low = 0, high = N - 1, minP = Integer.MAX_VALUE;
            while (low <= high) {
                int mid = (low + high) / 2;
                minP = Math.min(minP, w * Math.abs(b[mid] - a));
                if(b[mid] - a > 0) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            P = Math.max(P, minP);
        }
        System.out.println(P);
    }
}