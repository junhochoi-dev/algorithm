import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		long[][] dp = new long[N][N];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < N; j++) {
				dp[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				long u = i - 1 >= 0 ? dp[i - 1][j] : 0;
				long l = j - 1 >= 0 ? dp[i][j - 1] : 0;
				dp[i][j] = (Math.max(u, l) << 1) + dp[i][j];
			}
		}
		System.out.println(dp[N - 1][N - 1]);
	}
}