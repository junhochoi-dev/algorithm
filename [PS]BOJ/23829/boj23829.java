import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int Q = Integer.parseInt(st.nextToken());

        long[] distance = new long[N];
        long[] distanceSum = new long[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            distance[i] = Long.parseLong(st.nextToken());
        }
        Arrays.sort(distance);
        for(int i = 0; i < N; i++){
            distanceSum[i] = distance[i] + (i > 0 ? distanceSum[i - 1] : 0);
        }
        for(int i = 0; i < Q; i++){
            int low = 0;
            int high = N - 1;
            int x = Integer.parseInt(br.readLine());

            int idx = N - 1;
            while(low <= high){
                int mid = (low + high) / 2;
                if(distance[mid] <= x){
                    low = mid + 1;
                    idx = mid;
                } else {
                    high = mid - 1;
                }
            }
            long answer = 0;
            answer += Math.abs(distanceSum[N - 1] - distanceSum[idx] - (long) x * (N - idx - 1));
            answer += Math.abs((long) x * (idx + 1) - distanceSum[idx]);
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}
