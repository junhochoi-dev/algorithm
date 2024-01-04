import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int V, E, P;
    static ArrayList<NODE>[] edge;
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
    static int dijkstra(int s, int e){
        int[] distance = new int[V + 1];
        Arrays.fill(distance, Integer.MAX_VALUE);

        PriorityQueue<NODE> pq = new PriorityQueue<>();
        pq.add(new NODE(s, 0));
        distance[s] = 0;
        while(!pq.isEmpty()){
            NODE curr = pq.poll();
            for(NODE next : edge[curr.index]){
                if(distance[curr.index] + next.distance >= distance[next.index]) continue;
                distance[next.index] = distance[curr.index] + next.distance;
                pq.add(new NODE(next.index, distance[next.index]));
            }
        }
        return distance[e];
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        V = Integer.parseInt(st.nextToken());
        E = Integer.parseInt(st.nextToken());
        P = Integer.parseInt(st.nextToken());

        edge = new ArrayList[V + 1];
        for(int i = 0; i <= V; i++) edge[i] = new ArrayList<>();

        for(int i = 0; i < E; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());
            edge[s].add(new NODE(e, v));
            edge[e].add(new NODE(s, v));
        }

        boolean answer = (dijkstra(1, P) + dijkstra(P, V) == dijkstra(1, V));
        System.out.println(answer ? "SAVE HIM" : "GOOD BYE");
    }
}