import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	static class NODE implements Comparable<NODE> {
		int index, distance;

		public NODE(int index, int distance) {
			this.index = index;
			this.distance = distance;
		}

		@Override
		public int compareTo(NODE o) {
			return Integer.compare(this.distance, o.distance);
		}
	}

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int D = Integer.parseInt(st.nextToken());
		ArrayList<int[]> shortcut = new ArrayList<>();
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			int d = Integer.parseInt(st.nextToken());
			shortcut.add(new int[] {s, e, d});
		}

		int[] dp = new int[10_000 + 1];
		for (int i = 0; i <= 10_000; i++) {
			dp[i] = Integer.MAX_VALUE;
		}
		dp[0] = 0;

		PriorityQueue<NODE> pq = new PriorityQueue<>();
		pq.add(new NODE(0, 0));
		while (!pq.isEmpty()) {
			NODE curr = pq.poll();
			// + 1
			if (curr.index + 1 <= 10_000 && dp[curr.index + 1] > dp[curr.index] + 1) {
				dp[curr.index + 1] = dp[curr.index] + 1;
				pq.add(new NODE(curr.index + 1, dp[curr.index + 1]));
			}
			// shortcut
			for (int i = 0; i < N; i++) {
				int s = shortcut.get(i)[0];
				int e = shortcut.get(i)[1];
				int d = shortcut.get(i)[2];
				if (s != curr.index)
					continue;
				if (dp[e] > dp[s] + d) {
					dp[e] = dp[s] + d;
					pq.add(new NODE(e, dp[e]));
				}
			}
		}
		System.out.println(dp[D]);
	}
}