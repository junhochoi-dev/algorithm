import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int M = Integer.parseInt(st.nextToken());
		int N = Integer.parseInt(st.nextToken());

		int[][] arr = new int[N][M];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < M; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
			}
		}

		int[] dx = {1, 0};
		int[] dy = {0, 1};
		boolean[] visited = new boolean[N * M];
		Queue<Integer> queue = new ArrayDeque<>();

		queue.add(0);
		visited[0] = true;

		while(!queue.isEmpty()){
			int curr = queue.poll();
			int x = curr / M;
			int y = curr % M;
			for (int k = 0; k < 2; k++) {
				int tx = x + dx[k];
				int ty = y + dy[k];
				if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
				if(visited[tx * M + ty]) continue;
				if(arr[tx][ty] == 0) continue;
				visited[tx * M + ty] = true;
				queue.add(tx * M + ty);
			}
		}

		System.out.println(visited[N * M - 1] ? "Yes" : "No");
	}
}