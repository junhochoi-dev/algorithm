import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	static class NODE implements Comparable<NODE> {
		int index;
		long time;

		public NODE(int index, long time) {
			this.index = index;
			this.time = time;
		}

		@Override
		public int compareTo(NODE o) {
			return Long.compare(this.time, o.time);
		}
	}

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());

		int[] eyesight = new int[N];
		long[] dist = new long[N];
		ArrayList<NODE>[] edge = new ArrayList[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			eyesight[i] = Integer.parseInt(st.nextToken());
			dist[i] = Long.MAX_VALUE;
			edge[i] = new ArrayList<>();
		}

		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int t = Integer.parseInt(st.nextToken());
			edge[a].add(new NODE(b, t));
			edge[b].add(new NODE(a, t));
		}

		PriorityQueue<NODE> pq = new PriorityQueue<>();
		pq.add(new NODE(0, 0));
		dist[0] = 0;
		while (!pq.isEmpty()) {
			NODE curr = pq.poll();
			if (dist[curr.index] < curr.time)
				continue;
			for (NODE next : edge[curr.index]) {
				if (eyesight[next.index] == 1 && next.index != N - 1)
					continue;
				if (dist[next.index] <= dist[curr.index] + next.time)
					continue;
				dist[next.index] = dist[curr.index] + next.time;
				pq.add(new NODE(next.index, dist[next.index]));
			}
		}
		System.out.println(dist[N - 1] == Long.MAX_VALUE ? -1 : dist[N - 1]);
	}
}
