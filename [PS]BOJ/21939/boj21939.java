import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	static class PROBLEM implements Comparable<PROBLEM> {
		int index;
		int level;

		public PROBLEM(int index, int level) {
			this.index = index;
			this.level = level;
		}

		@Override
		public int compareTo(PROBLEM o) {
			if (this.level == o.level) {
				return Integer.compare(this.index, o.index);
			}
			return Integer.compare(this.level, o.level);
		}
	}

	public static void main(String[] args) throws IOException {
		PriorityQueue<PROBLEM> problem_easy = new PriorityQueue<>();
		PriorityQueue<PROBLEM> problem_hard = new PriorityQueue<>();

		int N = Integer.parseInt(br.readLine());

		boolean[][] able = new boolean[100_000 + 1][1000 + 1];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			int P = Integer.parseInt(st.nextToken());
			int L = Integer.parseInt(st.nextToken());
			problem_easy.add(new PROBLEM(P, L));
			problem_hard.add(new PROBLEM(-P, -L));
			able[P][L] = true;
		}

		int M = Integer.parseInt(br.readLine());

		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			String command = st.nextToken();
			if (command.equals("add")) {
				int P = Integer.parseInt(st.nextToken());
				int L = Integer.parseInt(st.nextToken());
				problem_easy.add(new PROBLEM(P, L));
				problem_hard.add(new PROBLEM(-P, -L));
				able[P][L] = true;
			}
			if (command.equals("recommend")) {
				int std = Integer.parseInt(st.nextToken());
				int recommend = -1;
				if (std == 1) {
					while (!problem_hard.isEmpty()) {
						int P = -problem_hard.peek().index;
						int V = -problem_hard.peek().level;
						if (able[P][V]) {
							recommend = P;
							break;
						}
						problem_hard.poll();
					}
				}
				if (std == -1) {
					while (!problem_easy.isEmpty()) {
						int P = problem_easy.peek().index;
						int V = problem_easy.peek().level;
						if (able[P][V]) {
							recommend = P;
							break;
						}
						problem_easy.poll();
					}
				}
				sb.append(recommend).append('\n');
			}
			if (command.equals("solved")) {
				int P = Integer.parseInt(st.nextToken());
				for (int v = 0; v <= 100; v++) {
					able[P][v] = false;
				}
			}
		}
		System.out.print(sb);
	}
}
