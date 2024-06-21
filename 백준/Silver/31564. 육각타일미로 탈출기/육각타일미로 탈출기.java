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
		int K = Integer.parseInt(st.nextToken());

		int[][] arr = new int[N][M];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				arr[i][j] = Integer.MAX_VALUE;
			}
		}
		for (int k = 0; k < K; k++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken());
			int y = Integer.parseInt(st.nextToken());
			arr[x][y] = -1;
		}
		int[] dx = {-1, -1, 0, 0, 1, 1};
		int[] dy = {0, 1, -1, 1, 0, 1};
		Queue<Integer> queue = new ArrayDeque<>();
		queue.add(0);
		arr[0][0] = 0;
		while (!queue.isEmpty()) {
			int curr = queue.poll();
			int x = curr / M;
			int y = curr % M;
			for (int k = 0; k < 6; k++) {
				int tx = x + dx[k];
				int ty = y + dy[k] + (x % 2 == 0 && dx[k] != 0 ? -1 : 0);
				if (tx < 0 || ty < 0 || tx >= N || ty >= M) {
					continue;
				}
				if (arr[tx][ty] == -1) {
					continue;
				}
				if (arr[tx][ty] <= arr[x][y] + 1) {
					continue;
				}
				arr[tx][ty] = arr[x][y] + 1;
				queue.add(tx * M + ty);
			}
		}
		System.out.println(arr[N - 1][M - 1] == Integer.MAX_VALUE ? -1 : arr[N - 1][M - 1]);
	}
}