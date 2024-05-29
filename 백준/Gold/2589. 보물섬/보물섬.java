import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        char[][] map = new char[N][M];
        for (int i = 0; i < N; i++) {
            String tmp = br.readLine();
            for (int j = 0; j < M; j++) {
                map[i][j] = tmp.charAt(j);
            }
        }
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};
        int answer = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if(map[i][j] == 'W') continue;
                int[][] dist = new int[N][M];
                for (int n = 0; n < N; n++) {
                    for (int m = 0; m < M; m++) {
                        dist[n][m] = Integer.MAX_VALUE;
                    }
                }
                Queue<Integer> queue = new ArrayDeque<>();
                queue.add(i * M + j);
                dist[i][j] = 0;
                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    int x = curr / M;
                    int y = curr % M;
                    for (int k = 0; k < 4; k++) {
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if(map[tx][ty] == 'W') continue;
                        if(dist[tx][ty] <= dist[x][y] + 1) continue;
                        dist[tx][ty] = dist[x][y] + 1;
                        answer = Math.max(answer, dist[tx][ty]);
                        queue.add(tx * M + ty);
                    }
                }
            }
        }
        System.out.println(answer);
    }
}