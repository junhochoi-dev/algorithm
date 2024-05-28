import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[][] server = new int[N][N];
        long sum = 0;
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                server[i][j] = Integer.parseInt(st.nextToken());
                sum += server[i][j];
            }
        }
        int answer = 10_000_000;
        int low = 0, high = 10_000_000;
        while(low <= high){
            int mid = (low + high) / 2;
            long cnt = 0;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    cnt += Math.min(mid, server[i][j]);
                }
            }
            if(sum % 2 == 0 ? cnt >= sum / 2 : cnt >= sum / 2 + 1) {
                answer = Math.min(answer, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}