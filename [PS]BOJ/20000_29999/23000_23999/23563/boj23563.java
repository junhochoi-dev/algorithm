import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	static int H, W, S, E;
	static int[] dx = {1, -1, 0, 0};
	static int[] dy = {0, 0, 1, -1};
	static char[][] arr;
	static int[][] distance;

	static void dijkstra(int start) {
		PriorityQueue<COORDINATE> pq = new PriorityQueue<>();
		distance[start / W][start % W] = 0;
		pq.add(new COORDINATE(start, 0));
		while (!pq.isEmpty()) {
			COORDINATE curr = pq.poll();
			int x = curr.index / W;
			int y = curr.index % W;
			boolean nearWallToMe = false;
			for (int k = 0; k < 4; k++) {
				int tx = x + dx[k];
				int ty = y + dy[k];
				if (tx < 0 || ty < 0 || tx >= H || ty >= W) {
					continue;
				}
				if (arr[tx][ty] == '#') {
					nearWallToMe = true;
				}
			}
			for (int k = 0; k < 4; k++) {
				boolean nearWallToYou = false;
				int tx = x + dx[k];
				int ty = y + dy[k];
				int next = tx * W + ty;
				for (int kk = 0; kk < 4; kk++) {
					int ttx = tx + dx[kk];
					int tty = ty + dy[kk];
					if (ttx < 0 || tty < 0 || ttx >= H || tty >= W) {
						continue;
					}
					if (arr[ttx][tty] == '#') {
						nearWallToYou = true;
					}
				}
				if (tx < 0 || ty < 0 || tx >= H || ty >= W) {
					continue;
				}
				if (arr[tx][ty] == '#') {
					continue;
				}
				if (distance[tx][ty] <= distance[x][y] + (nearWallToMe && nearWallToYou ? 0 : 1)) {
					continue;
				}
				distance[tx][ty] = distance[x][y] + (nearWallToMe && nearWallToYou ? 0 : 1);
				pq.add(new COORDINATE(next, distance[tx][ty]));
			}
		}
	}

	static class COORDINATE implements Comparable<COORDINATE> {
		int index;
		int distance;

		public COORDINATE(int index, int distance) {
			this.index = index;
			this.distance = distance;
		}

		@Override
		public int compareTo(COORDINATE o) {
			return Integer.compare(this.distance, o.distance);
		}
	}

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		H = Integer.parseInt(st.nextToken());
		W = Integer.parseInt(st.nextToken());

		arr = new char[H][W];
		distance = new int[H][W];
		for (int i = 0; i < H; i++) {
			String temp = br.readLine();
			for (int j = 0; j < W; j++) {
				arr[i][j] = temp.charAt(j);
				distance[i][j] = Integer.MAX_VALUE;
				if (arr[i][j] == 'S') {
					S = i * W + j;
				}
				if (arr[i][j] == 'E') {
					E = i * W + j;
				}
			}
		}
		dijkstra(S);
		System.out.println(distance[E / W][E % W]);
	}
}