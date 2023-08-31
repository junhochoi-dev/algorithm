import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int answer = Integer.MAX_VALUE;
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr.add(0);
        arr.add(L);
        for(int i = 0; i < N; i++) arr.add(Integer.parseInt(st.nextToken()));
        arr.sort(null);
        ArrayList<Integer> diff = new ArrayList<Integer>();
        for(int i = 0; i < N + 1; i++) diff.add(arr.get(i + 1) - arr.get(i));

        int low = 1;
        int high = L - 1;
        while(low < high){
            int mid = (low + high) / 2;
            int cnt = 0;
            for(int i = 0; i < N + 1; i++){
                cnt += diff.get(i) / mid;
                if(diff.get(i) % mid == 0) cnt--;
            }
            if(cnt <= M) answer = Math.min(answer, mid);
            if(cnt <= M) high = mid;
            if(cnt > M) low = mid + 1;
        }
        System.out.println(answer);
    }
}