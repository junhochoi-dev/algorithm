import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        long M = Long.parseLong(st.nextToken());
        int[] immigration = new int[N];
        long maximum = 0;
        for(int i = 0; i < N; i++){
            immigration[i] = Integer.parseInt(br.readLine());
            maximum = Math.max(maximum, immigration[i]);
        }
        Arrays.sort(immigration);
        long answer = Long.MAX_VALUE;
        long low = 0;
        long high = maximum * M;
        while(low <= high){
            long mid = (low + high) / 2;
            long cnt = 0;
            for(int i = 0; i < N; i++){
                cnt += mid / immigration[i];
                if(cnt >= M) break;
            }

            if(cnt >= M){
                answer = Math.min(answer, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}
