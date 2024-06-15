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
       double[][] pixel = new double[N][M];
       for (int i = 0; i < N; i++) {
          st = new StringTokenizer(br.readLine());
          for (int j = 0; j < M; j++) {
             double tmp = 0;
             for (int k = 0; k < 3; k++) {
                tmp += Integer.parseInt(st.nextToken());
             }
             pixel[i][j] = tmp / 3;
          }
       }
       int[] dx = {1, -1, 0, 0};
       int[] dy = {0, 0, 1, -1};
       boolean[][] visited = new boolean[N][M];
       int answer = 0;
       int T = Integer.parseInt(br.readLine());
       for (int i = 0; i < N; i++) {
          for (int j = 0; j < M; j++) {
             if(pixel[i][j] < T) continue;
             if(visited[i][j]) continue;
             answer++;
             Queue<Integer> queue = new ArrayDeque<>();
             queue.add(i * M + j);
             visited[i][j] = true;
             while(!queue.isEmpty()){
                int curr = queue.poll();
                int x = curr / M;
                int y = curr % M;
                for (int k = 0; k < 4; k++) {
                   int tx = x + dx[k];
                   int ty = y + dy[k];
                   if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                   if(pixel[tx][ty] < T) continue;
                   if(visited[tx][ty]) continue;
                   queue.add(tx * M + ty);
                   visited[tx][ty] = true;
                }
             }
          }
       }
       System.out.println(answer);
	}
}