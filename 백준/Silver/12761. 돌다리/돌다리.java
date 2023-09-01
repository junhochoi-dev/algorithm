import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[] dist = new int[100_000 + 1];
        int[] dx = {1, -1, A, -A, B, -B};
        int[] ddx = {A, B};
        Arrays.fill(dist, Integer.MAX_VALUE);
        dist[N] = 0;
        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(N);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            for(int k = 0; k < dx.length; k++){
                int next = curr + dx[k];
                if(next < 0 || next > 100_000) continue;
                if(dist[next] <= dist[curr] + 1) continue;
                dist[next] = dist[curr] + 1;
                queue.add(next);
            }
            for(int k = 0; k < ddx.length; k++){
                int next = curr * ddx[k];
                if(next < 0 || next > 100_000) continue;
                if(dist[next] <= dist[curr] + 1) continue;
                dist[next] = dist[curr] + 1;
                queue.add(next);
            }
        }
        System.out.println(dist[M]);
    }
}