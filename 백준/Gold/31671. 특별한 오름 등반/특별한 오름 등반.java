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

		int[] dy = {1, -1};
		boolean[][] visited = new boolean[2 * N + 1][N + 1];
		boolean[][] teacher = new boolean[2 * N + 1][N + 1];
		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken());
			int y = Integer.parseInt(st.nextToken());
			teacher[x][y] = true;
		}

		int answer = -1;

		Queue<int[]> queue = new ArrayDeque<>();
		queue.add(new int[] {0, 0, 0});
		while (!queue.isEmpty()) {
			int[] curr = queue.poll();
			int x = curr[0];
			int y = curr[1];
			int h = curr[2];
			if(x == 2 * N) answer = Math.max(answer, h);
			for (int k = 0; k < 2; k++) {
				int tx = x + 1;
				int ty = y + dy[k];
				if(tx < 0 || ty < 0 || tx > 2 * N || ty > N) continue;
				if(tx + ty > 2 * N) continue;
				if(teacher[tx][ty]) continue;
				if(visited[tx][ty]) continue;
				visited[tx][ty] = true;
				queue.add(new int[] {tx, ty, Math.max(h, ty)});
			}
		}
		System.out.println(answer);
	}
}