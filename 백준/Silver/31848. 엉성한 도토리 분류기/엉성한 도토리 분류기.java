import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[] acorn = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            acorn[i] = Integer.parseInt(st.nextToken()) + i;
            if(i - 1 >= 0) acorn[i] = Math.max(acorn[i], acorn[i - 1]);
        }

        int Q = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < Q; i++) {
            int size = Integer.parseInt(st.nextToken());
            int low = 0, high = N - 1;
            int answer = Integer.MAX_VALUE;
            while(low <= high){
                int mid = (low + high) / 2;
                if(acorn[mid] >= size){
                    answer = Math.min(answer, mid);
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            sb.append(answer + 1).append(" ");
        }
        System.out.println(sb);
    }
}