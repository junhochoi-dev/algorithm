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

		st = new StringTokenizer(br.readLine());
		int[] s = new int[1000 + 10000 + 1];
		for (int i = 1; i <= N; i++) {
			s[i] = Integer.parseInt(st.nextToken());
		}

		st = new StringTokenizer(br.readLine());
		int A = Integer.parseInt(st.nextToken());
		int D = Integer.parseInt(st.nextToken());

		int answer = Integer.MAX_VALUE;
		int[][] dp = new int[(N / D + 1) + 1][N + D];
		for (int i = 1; i <= N; i++) {
			dp[0][i] = dp[0][i - 1] + s[i];
			if (dp[0][i] >= M) {
				answer = Math.min(answer, 0);
			}
		}
		for (int i = 1; i <= N / D + 1; i++) {
			for (int j = D; j < N + D; j++) {
				dp[i][j] = Math.max(dp[i][j - 1] + s[j], dp[i - 1][j - D] + A);
				if (dp[i][j] >= M) {
					answer = Math.min(answer, i);
				}
			}
		}
		System.out.print(answer == Integer.MAX_VALUE ? -1 : answer);
	}
}