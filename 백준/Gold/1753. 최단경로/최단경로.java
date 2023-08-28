import java.io.*;
import java.net.Inet4Address;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int INF = Integer.MAX_VALUE;
    static class Node implements Comparable<Node> {
        int weight, next;
        public Node(int weight, int next) {
            this.weight = weight;
            this.next = next;
        }
        @Override
        public int compareTo(Node o) {
            return Integer.compare(this.weight, o.weight);
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(br.readLine());

        ArrayList<Node>[] edge = new ArrayList[N + 1];
        for(int i = 0; i <= N; i++) edge[i] = new ArrayList<Node>();
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            edge[a].add(new Node(w, b));
        }

        PriorityQueue<Node> queue = new PriorityQueue<Node>();
        int[] distance = new int[N + 1];
        Arrays.fill(distance, INF);
        distance[S] = 0;
        queue.add(new Node(0, S));

        while(!queue.isEmpty()){
            Node currnode = queue.poll();
            int curr = currnode.next;
            int currweight = currnode.weight;

            for(Node nextnode : edge[curr]){
                int next = nextnode.next;
                int nextweight = nextnode.weight;
                if(distance[next] <= currweight + nextweight) continue;
                distance[next] = currweight + nextweight;
                queue.add(new Node(distance[next], next));
            }
        }

        for (int i = 1; i <= N; i++) {
            if(distance[i] == INF) sb.append("INF").append('\n');
            else sb.append(distance[i]).append('\n');
        }
        System.out.println(sb);
    }
}