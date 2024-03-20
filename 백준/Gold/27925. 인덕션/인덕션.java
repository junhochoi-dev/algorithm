import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int INF = Integer.MAX_VALUE;
		int N = Integer.parseInt(br.readLine());
		int[][][][] dp = new int[N + 1][10][10][10];

		int[] t = new int[N + 1];
		st = new StringTokenizer(br.readLine());
		for (int n = 0; n <= N; n++) {
			if (n != 0)
				t[n] = Integer.parseInt(st.nextToken());
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					for (int k = 0; k < 10; k++) {
						dp[n][i][j][k] = INF;
					}
				}
			}
		}

		dp[0][0][0][0] = 0;
		for (int n = 1; n <= N; n++) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					for (int k = 1; k <= 5; k++) {
						int up = (t[n] + k) % 10;
						int down = (t[n] - k + 10) % 10;
						dp[n][t[n]][i][j] = Math.min(dp[n][t[n]][i][j], dp[n - 1][t[n]][i][j]);
						if (dp[n - 1][up][i][j] != INF) dp[n][t[n]][i][j] = Math.min(dp[n][t[n]][i][j], dp[n - 1][up][i][j] + k);
						if (dp[n - 1][down][i][j] != INF) dp[n][t[n]][i][j] = Math.min(dp[n][t[n]][i][j], dp[n - 1][down][i][j] + k);
						dp[n][i][t[n]][j] = Math.min(dp[n][i][t[n]][j], dp[n - 1][i][t[n]][j]);
						if (dp[n - 1][i][up][j] != INF) dp[n][i][t[n]][j] = Math.min(dp[n][i][t[n]][j], dp[n - 1][i][up][j] + k);
						if (dp[n - 1][i][down][j] != INF) dp[n][i][t[n]][j] = Math.min(dp[n][i][t[n]][j], dp[n - 1][i][down][j] + k);
						dp[n][i][j][t[n]] = Math.min(dp[n][i][j][t[n]], dp[n - 1][i][j][t[n]]);
						if (dp[n - 1][i][j][up] != INF) dp[n][i][j][t[n]] = Math.min(dp[n][i][j][t[n]], dp[n - 1][i][j][up] + k);
						if (dp[n - 1][i][j][down] != INF) dp[n][i][j][t[n]] = Math.min(dp[n][i][j][t[n]], dp[n - 1][i][j][down] + k);
					}
				}
			}
		}
		int answer = INF;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				answer = Math.min(answer, dp[N][t[N]][i][j]);
				answer = Math.min(answer, dp[N][i][t[N]][j]);
				answer = Math.min(answer, dp[N][i][j][t[N]]);
			}
		}
		System.out.println(answer);
	}
}