import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[] score = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            score[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine());
        int p = Integer.parseInt(st.nextToken());
        int q = Integer.parseInt(st.nextToken());
        int r = Integer.parseInt(st.nextToken());
        long S = Long.parseLong(st.nextToken());

        int low = 1, high = 100_001, K = Integer.MAX_VALUE;
        while(low <= high){
            int mid = (low + high) / 2;
            long sum = 0;
            for (int i = 0; i < N; i++) {
                sum += score[i];
                if(mid + r < score[i]) {
                    sum -= p;
                } else if(score[i] < mid) {
                    sum += q;
                }
            }
            if(sum < S) {
                low = mid + 1;
            } else {
                K = Math.min(K, mid);
                high = mid - 1;
            }
        }
        System.out.println(K == Integer.MAX_VALUE ? -1 : K);
    }
}