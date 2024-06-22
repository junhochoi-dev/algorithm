import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int M = Integer.parseInt(br.readLine());
        int[][] arr = new int[N][M];
        boolean[][] visited = new boolean[N][M];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int X = Integer.parseInt(br.readLine());

        int[] dx = {1, -1, 1, -1};
        int[] dy = {1, 1, -1, -1};
        Queue<Integer> queue = new ArrayDeque<>();
        queue.add(0);
        visited[0][0] = true;
        while(!queue.isEmpty()){
            int curr = queue.poll();
            int x = curr / M;
            int y = curr % M;
            for (int k = 0; k < 4; k++) {
                for (int i = 1; i <= X; i++) {
                    for (int j = 0; j <= i; j++) {
                        int tx = x + dx[k] * j;
                        int ty = y + dy[k] * (i - j);
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if(arr[tx][ty] != arr[0][0]) continue;
                        if(visited[tx][ty]) continue;
                        visited[tx][ty] = true;
                        queue.add(tx * M + ty);
                    }
                }
            }
        }
        System.out.println(visited[N - 1][M - 1] ? "ALIVE" : "DEAD");
    }
}