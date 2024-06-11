import java.io.*;
import java.util.*;

import javax.swing.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());

		st = new StringTokenizer(br.readLine());
		int H = Integer.parseInt(st.nextToken());
		int W = Integer.parseInt(st.nextToken());

		int[][] road = new int[N][M];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < M; j++) {
				road[i][j] = Integer.parseInt(st.nextToken()) - 1;
			}
		}

		boolean[][] safe = new boolean[N][M];
		Queue<Integer> queue = new ArrayDeque<>();
		int K = Integer.parseInt(br.readLine());
		for (int i = 0; i < K; i++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken()) - 1;
			int y = Integer.parseInt(st.nextToken()) - 1;
			queue.add(x * M + y);
			safe[x][y] = true;
		}

		int[] dx = {1, -1, 0, 0};
		int[] dy = {0, 0, 1, -1};
		while (!queue.isEmpty()) {
			int curr = queue.poll();
			int x = curr / M;
			int y = curr % M;
			for (int k = 0; k < 4; k++) {
				int tx = x + dx[k];
				int ty = y + dy[k];
				if (tx < 0 || ty < 0 || tx >= N || ty >= M) {
					continue;
				}
				if (safe[tx][ty]) {
					continue;
				}
				if (road[x][y] > road[tx][ty]) {
					continue;
				}
				safe[tx][ty] = true;
				queue.add(tx * M + ty);
			}
		}
		int answer = 0;
		for (int i = 0; i <= N - H; i++) {
			for (int j = 0; j <= M - W; j++) {
				boolean able = true;
				for (int n = 0; n < H; n++) {
					for (int m = 0; m < W; m++) {
						if (!safe[i + n][j + m]) {
							able = false;
							break;
						}
					}
					if (!able) {
						break;
					}
				}
				if (able) {
					answer++;
				}
			}
		}
		System.out.println(answer);
	}
}