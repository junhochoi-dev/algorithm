import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int[] dp = new int[20 + 1];
		dp[1] = 1; dp[2] = 2; dp[3] = 4; dp[4] = 7;
		for (int i = 5; i <= N; i++) {
			dp[i] = dp[i - 1] * 2 - (i % 2 == 0 ? (dp[i - 4] + dp[i - 5]) : 0);
		}
		System.out.println(dp[N]);
	}
}