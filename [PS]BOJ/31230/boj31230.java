import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class NODE implements Comparable<NODE> {
        int index;
        long weight;

        public NODE(int index, long weight) {
            this.index = index;
            this.weight = weight;
        }

        @Override
        public int compareTo(NODE o) {
            return Long.compare(this.weight, o.weight);
        }
    }

    static void dijkstra(int STD, int S) {
        PriorityQueue<NODE> pq = new PriorityQueue<>();
        pq.add(new NODE(S, 0));
        distance[STD][S] = 0;

        while (!pq.isEmpty()) {
            NODE curr = pq.poll();
            if(distance[STD][curr.index] < curr.weight) continue;
            for (NODE next : edge[curr.index]) {
                if (distance[STD][next.index] <= distance[STD][curr.index] + next.weight) continue;
                distance[STD][next.index] = distance[STD][curr.index] + next.weight;
                pq.add(new NODE(next.index, distance[STD][next.index]));
            }
        }
    }

    static int N, M, A, B;
    static long[][] distance;
    static ArrayList<NODE>[] edge;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        A = Integer.parseInt(st.nextToken());
        B = Integer.parseInt(st.nextToken());

        distance = new long[2][N + 1];
        edge = new ArrayList[N + 1];

        for (int i = 0; i <= N; i++) {
            edge[i] = new ArrayList<>();
            distance[0][i] = Long.MAX_VALUE;
            distance[1][i] = Long.MAX_VALUE;
        }

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            long w = Long.parseLong(st.nextToken());
            edge[a].add(new NODE(b, w));
            edge[b].add(new NODE(a, w));
        }

        dijkstra(0, A);
        dijkstra(1, B);

        int count = 0;
        for (int i = 1; i <= N; i++) {
            if (distance[0][i] + distance[1][i] == distance[0][B]) {
                sb.append(i).append(" ");
                count++;
            }
        }
        System.out.println(count);
        System.out.println(sb);
    }
}
