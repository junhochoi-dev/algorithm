import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        boolean[] visited = new boolean[100_000 + 1];
        int[] dist = new int[100_000 + 1];
        int[] next = new int[100_000 + 1];
        Queue<Integer> queue = new ArrayDeque<>();
        queue.add(N);
        visited[N] = true;
        while(!queue.isEmpty()){
            int cx = queue.poll();
            int[] dx = {cx - 1, cx + 1, cx * 2};
            boolean breakpoint = false;
            for (int k = 0; k < 3; k++) {
                int tx = dx[k];
                if(tx < 0 || tx > 100_000) continue;
                if(!visited[tx]){
                    visited[tx] = true;
                    queue.add(tx);
                    dist[tx] = dist[cx] + 1;
                    next[tx] = cx;
                }
                if(tx == K){
                    breakpoint = true;
                    break;
                }
            }
            if(breakpoint) break;
        }
        int count = dist[K];
        System.out.println(count);
        ArrayList<Integer> route = new ArrayList<>();
        route.add(K);
        for (int i = 0; i < count; i++) {
            route.add(next[K]);
            K = next[K];
        }
        for (int i = route.size() - 1; i >=0; i--) {
            sb.append(route.get(i)).append(' ');
        }
        System.out.println(sb);
    }
}