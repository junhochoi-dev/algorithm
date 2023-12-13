import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int K = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());

        for(int i = 0; i < N; i++){
            int X = Integer.parseInt(br.readLine());
            long answer = Long.MAX_VALUE;
            for(int j = 1; j < X; j++){
                if(((1 + j) * j) / 2 >= K){
                    answer = j;
                    break;
                }
            }
            if(answer == Long.MAX_VALUE){
                long low = X;
                long high = 100_000;
                while(low <= high){
                    long mid = (low + high) / 2;
                    long time = mid + (mid - X);
                    long sum = ((1 + mid) * mid) / 2 + (X + mid - 1) * (mid - X) / 2;
                    if(sum - X >= K) {
                        high = mid - 1;
                    } else {
                        if(K - sum > 0){
                            time += (K - sum) / mid;
                            if((K - sum) % mid != 0) time++;
                        }
                        answer = Math.min(answer, time);
                        low = mid + 1;
                    }
                }
            }
            System.out.println(answer);
        }
    }
}
