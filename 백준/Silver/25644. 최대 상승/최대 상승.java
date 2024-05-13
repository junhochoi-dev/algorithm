import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        int answer = 0;
        int MIN = Integer.MAX_VALUE, MAX = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            if(arr[i] < MIN) {
                MIN = arr[i];
                MAX = arr[i];
            } else {
                MAX = Math.max(MAX, arr[i]);
            }
            answer = Math.max(answer, MAX - MIN);
        }
        System.out.println(answer);
    }
}