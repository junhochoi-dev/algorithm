import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int T = Integer.parseInt(br.readLine());
		for (int i = 0; i < T; i++) {
			int N = Integer.parseInt(br.readLine());
			int minimum = Integer.MAX_VALUE, maximum = Integer.MIN_VALUE;
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < N; j++) {
				int val = Integer.parseInt(st.nextToken());
				minimum = Math.min(minimum, val);
				maximum = Math.max(maximum, val);
			}
			sb.append(minimum).append(" ").append(maximum).append('\n');
		}
		System.out.println(sb);
	}
}