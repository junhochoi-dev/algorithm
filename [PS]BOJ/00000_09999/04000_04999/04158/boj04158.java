import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		while (true) {
			st = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(st.nextToken());
			int M = Integer.parseInt(st.nextToken());
			if (N == 0 && M == 0)
				break;
			int answer = 0;
			HashSet<Integer> visited = new HashSet<>();
			for (int i = 0; i < N; i++) {
				visited.add(Integer.parseInt(br.readLine()));
			}
			for (int i = 0; i < M; i++) {
				if (visited.contains(Integer.parseInt(br.readLine())))
					answer++;
			}
			sb.append(answer).append('\n');
		}
		System.out.println(sb);
	}
}