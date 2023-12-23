import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class NODE implements Comparable<NODE> {
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
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            int[] distance = new int[n + 1];
            ArrayList<NODE>[] edge = new ArrayList[n + 1];
            for(int i = 0; i <= n; i++) {
                edge[i] = new ArrayList<>();
                distance[i] = Integer.MAX_VALUE;
            }

            for(int i = 0; i < d; i++){
                st = new StringTokenizer(br.readLine());
                int e = Integer.parseInt(st.nextToken());
                int s = Integer.parseInt(st.nextToken());
                int v = Integer.parseInt(st.nextToken());
                edge[s].add(new NODE(e, v));
            }


            PriorityQueue<NODE> pq = new PriorityQueue<>();
            pq.add(new NODE(c, 0));
            distance[c] = 0;

            while(!pq.isEmpty()){
                NODE curr = pq.poll();
                for(NODE next : edge[curr.index]){
                    if(distance[next.index] <= curr.distance + next.distance) continue;
                    distance[next.index] = curr.distance + next.distance;
                    pq.add(new NODE(next.index, distance[next.index]));
                }
            }

            int infected = 0;
            int maxtime = 0;
            for(int i = 1; i <= n; i++){
                if(distance[i] == Integer.MAX_VALUE) continue;
                infected++;
                maxtime = Math.max(maxtime, distance[i]);
            }
            System.out.println(infected + " " + maxtime);
        }
    }
}
