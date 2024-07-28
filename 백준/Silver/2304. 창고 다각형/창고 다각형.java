import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int[] std = new int[1000 + 1];
        int[] left = new int[1000 + 1];
        int[] right = new int[1000 + 1];
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int l = Integer.parseInt(st.nextToken());
            int h = Integer.parseInt(st.nextToken());
            std[l] = h;
        }
        int lmax = 0, rmax = 0;
        for (int i = 1, j = 1000; i <= 1000; i++,j--) {
            lmax = Math.max(lmax, std[i]);
            rmax = Math.max(rmax, std[j]);
            left[i] = lmax;
            right[j] = rmax;
        }
        int answer = 0;
        for (int i = 1; i <= 1000; i++) {
            answer += Math.min(left[i], right[i]);
        }
        System.out.println(answer);
    }
}