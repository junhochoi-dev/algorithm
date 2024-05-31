import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		long[][] dp = new long[30 + 1][30 + 1];
		dp[0][0] = 1;
		for (int w = 0; w <= 30; w++) {
			for (int h = 0; h <= w; h++) {
				if (h - 1 >= 0)
					dp[w][h] += dp[w][h - 1];
				if (w - 1 >= 0)
					dp[w][h] += dp[w - 1][h];
			}
		}
		while (true) {
			int val = Integer.parseInt(br.readLine());
			if (val == 0)
				break;
			sb.append(dp[val][val]).append('\n');
		}
		System.out.println(sb);
	}
}