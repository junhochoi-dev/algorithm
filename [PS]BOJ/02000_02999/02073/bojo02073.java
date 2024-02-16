import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class PIPE {
        int length;
        int capacity;

        PIPE(int length, int capacity) {
            this.length = length;
            this.capacity = capacity;
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int D = Integer.parseInt(st.nextToken());
        int P = Integer.parseInt(st.nextToken());
        ArrayList<PIPE> pipe = new ArrayList<>();
        for (int i = 0; i < P; i++) {
            st = new StringTokenizer(br.readLine());
            int length = Integer.parseInt(st.nextToken());
            int capacity = Integer.parseInt(st.nextToken());
            pipe.add(new PIPE(length, capacity));
        }
        int[] dp = new int[D + 1];
        for (int i = 0; i < P; i++) {
            int length = pipe.get(i).length;
            int capacity = pipe.get(i).capacity;
            for (int j = D; j >= 0; j--) {
                if (j - length < 0) continue;
                dp[j] = Math.max(dp[j], Math.min(capacity, dp[j - length]));
            }
            dp[length] = Math.max(dp[length], capacity);
        }
        System.out.println(dp[D]);
    }
}