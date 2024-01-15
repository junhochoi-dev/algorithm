import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken());
			int y = Integer.parseInt(st.nextToken());
			sb.append(x <= 23 && y <= 59 ? "Yes" : "No").append(" ");
			if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) {
				sb.append(1 <= y && y <= 31 ? "Yes" : "No");
			} else if (x == 4 || x == 6 || x == 9 || x == 11) {
				sb.append(1 <= y && y <= 30 ? "Yes" : "No");
			} else if (x == 2) {
				sb.append(1 <= y && y <= 29 ? "Yes" : "No");
			} else {
				sb.append("No");
			}
			sb.append('\n');
		}
		System.out.println(sb);
	}
}