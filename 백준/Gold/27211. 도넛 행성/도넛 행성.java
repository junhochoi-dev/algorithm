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

		boolean[][] map = new boolean[N][M];
		boolean[][] visited = new boolean[N][M];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < M; j++) {
				map[i][j] = Integer.parseInt(st.nextToken()) == 0;
			}
		}
		int answer = 0;
		int[] dx = {1, -1, 0, 0};
		int[] dy = {0, 0, 1, -1};
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (!map[i][j])
					continue;
				if (visited[i][j])
					continue;
				answer++;
				Queue<Integer> queue = new ArrayDeque<>();
				queue.add(i * M + j);
				visited[i][j] = true;
				while (!queue.isEmpty()) {
					int curr = queue.poll();
					int x = curr / M;
					int y = curr % M;

					for (int k = 0; k < 4; k++) {
						int tx = (N + x + dx[k]) % N;
						int ty = (M + y + dy[k]) % M;
						if (!map[tx][ty])
							continue;
						if (visited[tx][ty])
							continue;
						visited[tx][ty] = true;
						queue.add(tx * M + ty);
					}
				}
			}
		}
		System.out.println(answer);
	}
}