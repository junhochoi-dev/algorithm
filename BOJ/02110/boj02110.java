import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        int[] home = new int[N];
        for(int i = 0; i < N; i++) home[i] = Integer.parseInt(br.readLine());
        Arrays.sort(home);
        int answer = 0;
        int low = 0;
        int high = 1_000_000_000;
        while(low < high){
            int mid = (low + high) / 2;
            int cnt = 1;
            int prev = home[0];
            int maximum = Integer.MAX_VALUE;
            for(int i = 1; i < N; i++){
                if(home[i] - prev >= mid){
                    maximum = Math.min(maximum, home[i] - prev);
                    cnt++;
                    if(cnt == C) break;
                    prev = home[i];
                }
            }
            if(cnt == C) {
                low = mid + 1;
                answer = Math.max(answer, maximum);
            }
            else high = mid;
        }
        System.out.println(answer);
    }
}