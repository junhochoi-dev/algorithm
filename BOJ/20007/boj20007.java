import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static class NextNode implements Comparable<NextNode>{
        int weight;
        int nextnode;
        public NextNode(int weight, int nextnode) {
            this.weight = weight;
            this.nextnode = nextnode;
        }
        @Override
        public int compareTo(NextNode o) {
            return Integer.compare(this.weight, o.weight);
        }
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());
        int Y = Integer.parseInt(st.nextToken());

        int[] distance = new int[N];
        Arrays.fill(distance, Integer.MAX_VALUE);

        HashMap<Integer, HashMap<Integer, Integer>> edge = new HashMap<>();

        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            if(!edge.containsKey(a)) edge.put(a, new HashMap<Integer, Integer>());
            if(!edge.get(a).containsKey(b)) edge.get(a).put(b, w);
            if(!edge.containsKey(b)) edge.put(b, new HashMap<Integer, Integer>());
            if(!edge.get(b).containsKey(a)) edge.get(b).put(a, w);
        }

        PriorityQueue<NextNode> pq = new PriorityQueue<NextNode>();
        pq.add(new NextNode(0, Y));
        distance[Y] = 0;
        while(!pq.isEmpty()){
            NextNode currnode = pq.poll();
            int curr = currnode.nextnode;
            for(int next : edge.get(curr).keySet()){
                int nextweight = edge.get(curr).get(next);
                if(distance[curr] + nextweight < distance[next]){
                    distance[next] = distance[curr] + nextweight;
                    pq.add(new NextNode(nextweight, next));
                }
            }
        }
        Arrays.sort(distance);
        int cnt = 0;
        int day = 1;
        int daydistance = X;
        for(int i = 1; i < N; i++){
            if (daydistance < distance[i] * 2){
                day++;
                daydistance = X;
                if(daydistance < distance[i] * 2) break;
            }
            daydistance -= distance[i] * 2;
            cnt++;
        }
        System.out.println(cnt != N - 1 ? -1 : day);
    }
}