import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[] order = new int[N + 1];
        order[1] = 1;
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N - 1; i++) {
            int num = i + 2;
            int gap = Integer.parseInt(st.nextToken());
            order[gap + 2] = num;
        }
        for (int i = 1; i <= N; i++) {
            System.out.print(order[i] + " ");
        }
    }
}