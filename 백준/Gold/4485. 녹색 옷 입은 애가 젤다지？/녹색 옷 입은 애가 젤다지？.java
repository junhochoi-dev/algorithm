import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};
        int idx = 1;
        while(true){
            int N = Integer.parseInt(br.readLine());
            if(N == 0) break;
            int[][] map = new int[N][N];
            int[][] dist = new int[N][N];
            for (int i = 0; i < N; i++) {
                st = new StringTokenizer(br.readLine());
                for (int j = 0; j < N; j++) {
                    map[i][j] = Integer.parseInt(st.nextToken());
                    dist[i][j] = Integer.MAX_VALUE;
                }
            }

            Queue<Integer> queue = new ArrayDeque<>();
            queue.add(0);
            dist[0][0] = map[0][0];
            while(!queue.isEmpty()){
                int curr = queue.poll();
                int x = curr / N;
                int y = curr % N;
                for (int k = 0; k < 4; k++) {
                    int tx = x + dx[k];
                    int ty = y + dy[k];
                    if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                    if(dist[tx][ty] <= dist[x][y] + map[tx][ty]) continue;
                    dist[tx][ty] = dist[x][y] + map[tx][ty];
                    queue.add(tx * N + ty);
                }
            }
            sb.append("Problem ").append(idx++).append(": ").append(dist[N - 1][N - 1]).append('\n');
        }
        System.out.println(sb);
    }
}