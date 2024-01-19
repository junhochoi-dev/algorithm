import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		for (int i = 1; i <= N; i++) {
			st = new StringTokenizer(br.readLine());
			int[] num = new int[3];
			for (int j = 0; j < 3; j++) {
				num[j] = Integer.parseInt(st.nextToken());
			}
			Arrays.sort(num);
			sb.append("Scenario #").append(i).append(":").append('\n');
			sb.append(num[2] * num[2] == num[0] * num[0] + num[1] * num[1] ? "yes" : "no").append("\n\n");
		}
		System.out.println(sb);
	}
}