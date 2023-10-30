import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class Vertex implements Comparable<Vertex> {
        int next, weight;
        Vertex(int next, int weight){
            this.next = next;
            this.weight = weight;
        }
        @Override
        public int compareTo(Vertex o) {
            return Integer.compare(this.weight, o.weight);
        }
    }
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int friends[] = new int[3];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < 3; i++){
            friends[i] = Integer.parseInt(st.nextToken());
        }

        int M = Integer.parseInt(br.readLine());

        ArrayList<Vertex> edge[] = new ArrayList[N + 1];
        for(int i = 0; i <= N; i++) edge[i] = new ArrayList<Vertex>();

        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());

            edge[a].add(new Vertex(b, w));
            edge[b].add(new Vertex(a, w));
        }

        int dist[][] = new int[3][N + 1];
        for(int i = 0; i < 3; i++){
            Arrays.fill(dist[i], Integer.MAX_VALUE);

            PriorityQueue<Vertex> pq = new PriorityQueue<Vertex>();
            dist[i][friends[i]] = 0;
            pq.add(new Vertex(friends[i], dist[i][friends[i]]));
            while(!pq.isEmpty()){
                Vertex c = pq.poll();
                int curr = c.next;

                for(Vertex n : edge[curr]){
                    int next = n.next;
                    int next_weight = n.weight;

                    if(dist[i][next] > dist[i][curr] + next_weight){
                        dist[i][next] = dist[i][curr] + next_weight;
                        pq.add(new Vertex(next, dist[i][next]));
                    }
                }
            }
        }

        int answer = -1;
        int distance = 0;

        for(int i = 1; i <= N; i++){
            int std = Math.min(dist[0][i], Math.min(dist[1][i], dist[2][i]));
            if(std > distance){
                answer = i;
                distance = std;
            }
        }
        System.out.println(answer);
    }
}