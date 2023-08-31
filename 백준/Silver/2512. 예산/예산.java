import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        int[] arr = new int[N];
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(br.readLine());
        int low = 0;
        int high = 1_000_000_000;
        int answer = 0;
        while(low < high){
            int mid = (low + high) / 2;
            int sum = 0;
            int maximum = 0;
            for(int i = 0; i < N; i++){
                sum += Math.min(arr[i], mid);
                maximum = Math.max(maximum, Math.min(mid, arr[i]));
            }
            if(sum > M) high = mid;
            if(sum <= M) {
                low = mid + 1;
                answer = Math.max(answer, maximum);
            }
        }
        System.out.println(answer);
    }
}