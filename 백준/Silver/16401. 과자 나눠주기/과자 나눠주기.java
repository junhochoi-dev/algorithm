import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
        int left = 0;
        int right = 1_000_000_000;
        int mid = -1;
        while(true){
            mid = (left + right) / 2;
            if(left == mid || mid == right) break;

            int cnt = 0;
            for(int i = 0; i < N; i++) cnt += arr[i] / mid;

            if(cnt >= M) left = mid;
            else right = mid;
        }
        System.out.println(mid);
    }
}
