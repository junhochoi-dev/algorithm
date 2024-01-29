import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class NODE implements Comparable<NODE> {

        int index;
        Long cost;

        public NODE(int index, Long cost) {
            this.index = index;
            this.cost = cost;
        }

        @Override
        public int compareTo(NODE o) {
            return Long.compare(this.cost, o.cost);
        }
    }

    static void dijkstra(int STD, int start) {
        PriorityQueue<NODE> pq = new PriorityQueue<>();
        pq.add(new NODE(start, 0L));
        distance[STD][start] = 0;

        while (!pq.isEmpty()) {
            NODE curr = pq.poll();

            if (distance[STD][curr.index] < curr.cost) continue;

            for (NODE next : edge[curr.index]) {
                if (distance[STD][next.index] <= distance[STD][curr.index] + next.cost) continue;
                distance[STD][next.index] = distance[STD][curr.index] + next.cost;
                pq.add(new NODE(next.index, distance[STD][next.index]));
            }
        }
    }

    static int N, M, K;
    static long[] elevator;
    static long[][] distance;
    static ArrayList<NODE>[] edge;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());

        edge = new ArrayList[N + 1];
        distance = new long[2][N + 1];
        for (int i = 0; i <= N; i++) {
            edge[i] = new ArrayList<>();
            distance[0][i] = Long.MAX_VALUE;
            distance[1][i] = Long.MAX_VALUE;
        }

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int u = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());
            long c = Long.parseLong(st.nextToken());
            edge[u].add(new NODE(v, c));
            edge[v].add(new NODE(u, c));
        }

        dijkstra(0, 1);
        dijkstra(1, N);

        elevator = new long[N + 1];
        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= N; i++) {
            elevator[i] = Long.parseLong(st.nextToken());
        }

        long answer = Long.MAX_VALUE;
        for (int i = 1; i <= N; i++) {
            if (distance[0][i] == Long.MAX_VALUE) continue;
            if (distance[1][i] == Long.MAX_VALUE) continue;
            if (elevator[i] == -1) continue;
            answer = Math.min(answer, distance[0][i] + distance[1][i] + elevator[i] * (K - 1));
        }
        System.out.println(answer == Long.MAX_VALUE ? -1 : answer);
    }
}