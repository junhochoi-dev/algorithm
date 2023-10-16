import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, K, answer = 0;
    static int arr[];
    static boolean able(int std){
        int sum = 0;
        int group = 0;
        for(int i = 0; i < N; i++){
            sum += arr[i];
            if(sum >= std){
                sum = 0;
                group++;
            }
        }
        return group >= K;
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        arr = new int[N];
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());

        int low = 1;
        int high = 100_000 * 20;
        while (low <= high){
            int mid = (low + high) / 2;
            if(able(mid)){
                answer = Math.max(answer, mid);
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        System.out.println(answer);
    }
}