import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] arr;
    static boolean exist(int std){
        int minimum = Integer.MAX_VALUE;
        int maximum = Integer.MIN_VALUE;
        int partition = 0;
        for(int i = 0; i < N; i++){
            minimum = Math.min(minimum, arr[i]);
            maximum = Math.max(maximum, arr[i]);
            if(Math.abs(maximum - minimum) > std){
                maximum = minimum = arr[i];
                partition++;
                if(partition > M) return false;
            }
        }
        return true;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        M--;
        arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
        int left = 0;
        int right = 9999;
        int mid = -1;
        int answer = Integer.MAX_VALUE;
        while(left <= right){
            mid = (left + right) / 2;
            if(exist(mid)) {
                right = mid - 1;
                answer = Math.min(answer, mid);
            }
            else left = mid + 1;
        };
        System.out.println(answer);
    }
}