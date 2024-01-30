import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, X;
    static int[] arr;

    static boolean able(int cnt) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 0; i < cnt; i++) pq.add(0);
        for (int i = 0; i < N; i++) {
            int curr = pq.poll();
            curr += arr[i];
            pq.add(curr);
        }
        int maximum = 0;
        while(!pq.isEmpty()){
            maximum = Math.max(maximum, pq.poll());
        }
        return maximum <= X;
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        X = Integer.parseInt(st.nextToken());

        arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int answer = Integer.MAX_VALUE;
        int low = 1;
        int high = N;
        while (low <= high) {
            int mid = (low + high) / 2;
            if(able(mid)){
                high = mid - 1;
                answer = Math.min(answer, mid);
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}