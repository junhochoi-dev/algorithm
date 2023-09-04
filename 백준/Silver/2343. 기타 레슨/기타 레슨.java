import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[] bluray = new int[N];
        st = new StringTokenizer(br.readLine());
        int answer = Integer.MAX_VALUE;
        int low = 1;
        int high = 1_000_000_000;
        for(int i = 0; i < N; i++)  bluray[i] = Integer.parseInt(st.nextToken());
        while(low < high){
            int mid = (low + high) / 2;
            boolean able = true;
            int sum = 0;
            int cnt = 1;
            for(int i = 0; i < N; i++){
                if(sum + bluray[i] > mid){
                    sum = 0;
                    cnt++;
                    if(cnt > M) able = false;
                    sum += bluray[i];
                    if(sum > mid) able = false;
                }
                else sum += bluray[i];
                if(!able) break;
            }
            if(!able) low = mid + 1;
            else {
                answer = Math.min(answer, mid);
                high = mid;
            }
        }
        System.out.println(answer);
    }
}