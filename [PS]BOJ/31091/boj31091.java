import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int[] upper = new int[N + 1];
		int[] lower = new int[N + 1];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			int std = Integer.parseInt(st.nextToken());
			if (std > 0) {
				upper[std]++;
			} else {
				lower[-std]++;
			}
		}

		for (int i = 1; i <= N; i++) {
			upper[N - i] += upper[N - i + 1];
			lower[i] += lower[i - 1];
		}

		int count = 0;
		for (int i = 0; i <= N; i++) {
			int u = (i == N ? 0 : upper[i + 1]);
			int l = (i == 0 ? 0 : lower[i - 1]);
			if (u + l == i) {
				count++;
				sb.append(i).append(" ");
			}
		}
		System.out.println(count);
		System.out.println(sb);
	}
}