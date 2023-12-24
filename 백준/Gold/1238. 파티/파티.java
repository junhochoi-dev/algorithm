import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class NODE implements Comparable<NODE>{
        int index, distance;
        NODE(int index, int distance){
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
        int M = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());

        int[] distance_s = new int[N + 1];
        int[] distance_e = new int[N + 1];
        ArrayList<NODE>[] edge_s = new ArrayList[N + 1];
        ArrayList<NODE>[] edge_e = new ArrayList[N + 1];
        for(int i = 0; i <= N; i++) {
            distance_s[i] = Integer.MAX_VALUE;
            distance_e[i] = Integer.MAX_VALUE;
            edge_s[i] = new ArrayList<>();
            edge_e[i] = new ArrayList<>();
        }

        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            edge_s[e].add(new NODE(s, d));
            edge_e[s].add(new NODE(e, d));
        }

        PriorityQueue<NODE> pq = new PriorityQueue<>();

        pq.add(new NODE(X, 0));
        distance_s[X] = 0;
        while(!pq.isEmpty()){
            NODE curr = pq.poll();

            for(NODE next : edge_s[curr.index]){
                if(distance_s[next.index] <= curr.distance + next.distance) continue;
                distance_s[next.index] = curr.distance + next.distance;
                pq.add(new NODE(next.index, distance_s[next.index]));
            }
        }

        pq.add(new NODE(X, 0));
        distance_e[X] = 0;
        while(!pq.isEmpty()){
            NODE curr = pq.poll();

            for(NODE next : edge_e[curr.index]){
                if(distance_e[next.index] <= curr.distance + next.distance) continue;
                distance_e[next.index] = curr.distance + next.distance;
                pq.add(new NODE(next.index, distance_e[next.index]));
            }
        }

        int maxtime = 0;
        for(int i = 1; i <= N; i++) maxtime = Math.max(maxtime, distance_s[i] + distance_e[i]);
        System.out.println(maxtime);
    }
}
