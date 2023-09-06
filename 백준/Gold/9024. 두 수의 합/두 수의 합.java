import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, K;
    static int[] arr;
    static int minimum(){
        int l = 0;
        int r = N - 1;
        int gap = Integer.MAX_VALUE;
        while(l < r){
            int sum = arr[l] + arr[r];
            gap = Math.min(gap, Math.abs(K - sum));
            if(sum > K) r--;
            if(sum < K) l++;
            if(sum == K) break;
        }
        return gap;
    }
    static int pair(int std){
        int cnt = 0;
        for(int i = 0 ; i < N; i++){
            int low = i + 1;
            int high = N;
            while(low < high){
                int mid = (low + high) / 2;
                int sum = arr[i] + arr[mid];
                if(std < sum) {
                    high = mid;
                } else if(std > sum) {
                    low = mid + 1;
                } else {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            K = Integer.parseInt(st.nextToken());

            arr = new int[N];

            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
            Arrays.sort(arr);
            int gap = minimum();
            int answer = pair(K - gap) + (gap == 0 ? 0 : pair(K + gap));
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}

