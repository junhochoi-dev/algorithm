import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int L = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int answer = Integer.MAX_VALUE;
        int low = 1;
        int high = L;
        int[] dist = new int[N + 2];
        dist[0] = 0;
        dist[N + 1] = L;
        for (int i = 1; i <= N; i++) {
            dist[i] = Integer.parseInt(st.nextToken());
        }
        while(low <= high){
            int mid = (low + high) / 2;
            boolean able = true;
            int battery = mid;
            int charge = 0;
            for (int i = 1; i <= N + 1; i++) {
                if(dist[i] - dist[i - 1] > mid){
                    able = false;
                    break;
                }
                if(dist[i] - dist[i - 1] <= battery){
                    battery -= (dist[i] - dist[i - 1]);
                } else {
                    battery = mid - (dist[i] - dist[i - 1]);
                    charge++;
                }
            }
            if(charge > K) able = false;
            if(able) {
                high = mid - 1;
                answer = Math.min(answer, mid);
            }
            else low = mid + 1;
        }
        System.out.println(answer);
    }
}