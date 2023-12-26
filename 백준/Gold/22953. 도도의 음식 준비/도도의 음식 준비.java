import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static boolean able;
    static int N, K, C;
    static long answer = Long.MAX_VALUE;
    static long[] arr;
    static void cheerup(int depth, long std){
        if(depth == C) {
            long sum = 0;
            for(int i = 0; i < N; i++){
                sum += std / arr[i];
            }
            if(sum >= K) able = true;
            return;
        }
        for(int i = 0; i < N; i++){
            if(arr[i] == 1) cheerup(depth + 1, std);
            else {
                arr[i]--;
                cheerup(depth + 1, std);
                arr[i]++;
            }
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());

        arr = new long[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());

        long low = 0, high = 1_000_000L * 1_000_000L;
        while(low <= high){
            long mid = (low + high) / 2;
            able = false;
            cheerup(0, mid);
            if(able){
                high = mid - 1;
                answer = Math.min(answer, mid);
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}