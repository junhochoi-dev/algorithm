import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	static int answer = Integer.MAX_VALUE;
	static int[] dx = {1, -1, 0, 0};
	static int[] dy = {0, 0, 1, -1};
	static int[][] arr;
	static boolean[][] visited;
	static void DFS(int x, int y, int apple, int dist){
		if(answer <= dist) return;
		if(arr[x][y] == 1) apple++;
		if(apple == 3){
			answer = Math.min(answer, dist);
			return;
		}
		for (int k = 0; k < 4; k++) {
			int tx = x + dx[k];
			int ty = y + dy[k];
			if(tx < 0 || ty < 0 || tx >= 5 || ty >= 5) continue;
			if(arr[tx][ty] == -1) continue;
			if(visited[tx][ty]) continue;
			visited[tx][ty] = true;
			DFS(tx, ty, apple, dist + 1);
			visited[tx][ty] = false;
		}
	}
	public static void main(String[] args) throws IOException {
		arr = new int[5][5];
		visited = new boolean[5][5];
		for (int i = 0; i < 5; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < 5; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		st = new StringTokenizer(br.readLine());
		int x = Integer.parseInt(st.nextToken());
		int y = Integer.parseInt(st.nextToken());
		visited[x][y] = true;
		DFS(x, y, 0, 0);
		visited[x][y] = false;
		System.out.println(answer == Integer.MAX_VALUE ? -1 : answer);
	}
}