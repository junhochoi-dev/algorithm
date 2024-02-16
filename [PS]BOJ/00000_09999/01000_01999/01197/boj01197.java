import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static StringBuilder sb = new StringBuilder();
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
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
    static class Edge implements Comparable<Edge>{
        Long weight;
        int a, b;
        public Edge(Long weight, int a, int b) {
            this.weight = weight;
            this.a = a;
            this.b = b;
        }
        @Override
        public int compareTo(Edge o) {
            if(this.weight > o.weight) return 1;
            if(this.weight < o.weight) return -1;
            return 0;
        }
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int V = Integer.parseInt(st.nextToken());
        int E = Integer.parseInt(st.nextToken());

        root = new int[V + 1];
        for(int i = 1; i <= V; i++) root[i] = i;

        PriorityQueue<Edge> edgeList = new PriorityQueue<Edge>();
        for(int i = 0; i < E; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            Long w = Long.parseLong(st.nextToken());
            edgeList.add(new Edge(w, a, b));
        }
        int edgeCnt = 0;
        int answer = 0;
        while(true){
            Edge curr = edgeList.poll();
            Long weight = curr.weight;
            int a = curr.a;
            int b = curr.b;
            if(find(a) != find(b)){
                union(a, b);
                answer += weight;
                edgeCnt++;
                if(edgeCnt == V - 1) break;
            }
        }
        sb.append(answer).append('\n');
        System.out.println(sb);
    }
}
