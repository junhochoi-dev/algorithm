import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int maximum = 0;
        int[] arr = new int[100_000 + 1];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            int idx = Integer.parseInt(st.nextToken());
            arr[idx]++;
            maximum = Math.max(maximum, arr[idx]);
        }
        System.out.println(N - maximum < maximum - 1 ? "NO" : "YES");
    }
}
