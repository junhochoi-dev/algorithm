import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        long K = Long.parseLong(st.nextToken());
        long[] arr = new long[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Long.parseLong(st.nextToken());
        }
        long answer = Long.MAX_VALUE, low = 0, high = 1_000_000_000_000L;
        while(low <= high){
            long mid = (low + high) / 2;
            long sum = 0;
            for (int i = 0; i < N; i++) {
                sum += Math.max(0, arr[i] - mid);
            }
            if(sum <= K){
                high = mid - 1;
                answer = Math.min(answer, mid);
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}