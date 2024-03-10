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
        int A = Integer.parseInt(st.nextToken());

        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        long answer = Long.MAX_VALUE;
        long low = 1, high = 10_000_000_000L;
        while (low <= high) {
            long mid = (low + high) / 2;
            long ability = mid, score = 0, cnt = 0;
            for (int i = 0; i < N; ) {
                if (arr[i] > ability || cnt >= M) break;
                if (i + 1 != N && ability >= arr[i + 1]) {
                    i++;
                    continue;
                }
                score += arr[i];
                ability += arr[i];
                cnt++;
            }
            if (score >= A) {
                high = mid - 1;
                answer = Math.min(answer, mid);
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}