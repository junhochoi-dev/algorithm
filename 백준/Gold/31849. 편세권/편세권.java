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
		int R = Integer.parseInt(st.nextToken());
		int C = Integer.parseInt(st.nextToken());

		ArrayList<int[]> rooms = new ArrayList<>();
		for (int i = 0; i < R; i++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken()) - 1;
			int y = Integer.parseInt(st.nextToken()) - 1;
			int c = Integer.parseInt(st.nextToken());
			rooms.add(new int[] {x, y, c});
		}

		int[][] dist = new int[N][M];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				dist[i][j] = Integer.MAX_VALUE;
			}
		}

		Queue<int[]> queue = new ArrayDeque<>();
		for (int i = 0; i < C; i++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken()) - 1;
			int y = Integer.parseInt(st.nextToken()) - 1;
			dist[x][y] = 0;
			queue.add(new int[] {x, y, 0});
		}

		int[] dx = {1, -1, 0, 0};
		int[] dy = {0, 0, 1, -1};
		while (!queue.isEmpty()) {
			int[] curr = queue.poll();
			int x = curr[0];
			int y = curr[1];
			int d = curr[2];
			for (int k = 0; k < 4; k++) {
				int tx = x + dx[k];
				int ty = y + dy[k];
				if (tx < 0 || ty < 0 || tx >= N || ty >= M) {
					continue;
				}
				if (dist[tx][ty] <= d + 1) {
					continue;
				}
				dist[tx][ty] = d + 1;
				queue.add(new int[] {tx, ty, d + 1});
			}
		}

		int answer = Integer.MAX_VALUE;
		for (int[] room : rooms) {
			answer = Math.min(answer, room[2] * dist[room[0]][room[1]]);
		}
		System.out.println(answer);
	}
}