import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;
	static int[] root;
	static int find(int x){
		if(x == root[x]) return x;
		return root[x] = find(root[x]);
	}
	static void union(int a, int b){
		a = find(a);
		b = find(b);
		root[a] = b;
	}
	static class EDGE implements Comparable<EDGE> {
		int from, to, cost;
		public EDGE(int from, int to, int cost) {
			this.from = from;
			this.to = to;
			this.cost = cost;
		}
		@Override
		public int compareTo(EDGE o) {
			return Integer.compare(this.cost, o.cost);
		}
	}
	public static void main(String[] args) throws IOException {
		while(true) {
			st = new StringTokenizer(br.readLine());
			int M = Integer.parseInt(st.nextToken());
			int N = Integer.parseInt(st.nextToken());
			if(M == 0 && N == 0) break;

			root = new int[N + 1];
			for (int i = 0; i < N; i++) root[i] = i;

			PriorityQueue<EDGE> edgelist = new PriorityQueue<>();
			int answer = 0;
			for (int i = 0; i < N; i++) {
				st = new StringTokenizer(br.readLine());
				int from = Integer.parseInt(st.nextToken());
				int to = Integer.parseInt(st.nextToken());
				int cost = Integer.parseInt(st.nextToken());
				answer += cost;
				edgelist.add(new EDGE(from, to, cost));
			}
			int cnt = 0;
			while(true){
				EDGE curr = edgelist.poll();
				if(find(curr.from) != find(curr.to)){
					union(curr.from, curr.to);
					answer -= curr.cost;
					cnt++;
					if(cnt == M - 1) break;
				}
			}
			sb.append(answer).append('\n');
		}
		System.out.println(sb);
	}
}