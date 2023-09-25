import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, S;
    static int[] dist;
    static boolean able(int std){
        int cnt = 1;
        int sum = 0;
        int minimum = Integer.MAX_VALUE;
        for (int i = 1; i < N; i++) {
            if(sum + (dist[i] - dist[i - 1]) >= std){
                minimum = Math.min(minimum, sum + dist[i] - dist[i - 1]);
                sum = 0;
                cnt++;
            } else {
                sum += dist[i] - dist[i - 1];
            }
        }
        return minimum >= std && cnt >= S;
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            S = Integer.parseInt(st.nextToken());
            dist = new int[N];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < N; i++) dist[i] = Integer.parseInt(st.nextToken());
            Arrays.sort(dist);

            int answer = 0;
            int low = 0;
            int high = 1_000_000_000;
            while(low <= high){
                int mid = (low + high) / 2;
                if(able(mid)){
                    low = mid + 1;
                    answer = Math.max(answer, mid);
                } else {
                    high = mid - 1;
                }
            }
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}