import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
        ArrayList<Integer> dp = new ArrayList<Integer>();
        dp.add(arr[0]);
        for(int i = 1; i < N; i++){
            int low = 0;
            int high = dp.size();
            if(dp.get(dp.size() - 1) < arr[i]){
                dp.add(arr[i]);
                continue;
            }
            int idx = Integer.MAX_VALUE;
            while(low < high){
                int mid = (low + high) / 2;
                if(dp.get(mid) >= arr[i]){
                    high = mid;
                    idx = Math.min(idx, mid);
                } else {
                    low = mid + 1;
                }
            }
            dp.set(idx, arr[i]);
        }
        System.out.println(dp.size());
    }
}