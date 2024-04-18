import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int K = Integer.parseInt(st.nextToken());
		int N = Integer.parseInt(st.nextToken());
		long[][] dp = new long[1 << 6 + 1][1 << 6 + 1];

		for (int i = 0; i <= (1 << 6); i++) {
			for (int j = 0; j <= i; j++) {
				dp[i][j] = (i == j ? (1L << j) - 1 : (1L << j));
			}
		}

		for (int j = 1; j < (1 << 6); j++) {
			for (int i = 1; i < j; i++) {
				dp[i][j] = dp[i - 1][j - 1] + dp[i + 1][j - 1];
			}
		}

		System.out.println(dp[K][N]);
	}
}