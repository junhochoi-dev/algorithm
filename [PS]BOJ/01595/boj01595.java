import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int[] distance;
    static ArrayList<NODE>[] edge;

    static class NODE{
        int index;
        int weight;
        public NODE(int index, int weight) {
            this.index = index;
            this.weight = weight;
        }
    }

    static int BFS(int start){
        distance = new int[10000 + 1];
        Arrays.fill(distance, Integer.MAX_VALUE);

        Queue<Integer> queue = new ArrayDeque<>();
        queue.add(start);
        distance[start] = 0;

        int maxDistance = 0;
        int maxNode = 0;
        while(!queue.isEmpty()){
            int curr = queue.poll();
            for(NODE next : edge[curr]){
                if(distance[next.index] <= distance[curr] + next.weight){
                    continue;
                }
                distance[next.index] = distance[curr] + next.weight;
                if(maxDistance < distance[next.index]){
                    maxDistance = distance[next.index];
                    maxNode = next.index;
                }
                queue.add(next.index);
            }
        }
        return maxNode;
    }

    public static void main(String[] args) throws IOException {
        edge = new ArrayList[10000 + 1];
        for(int i = 0; i <= 10000; i++){
            edge[i] = new ArrayList<>();
        }

        String input;
        while((input = br.readLine()) != null){
            try{
                st = new StringTokenizer(input);
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                int w = Integer.parseInt(st.nextToken());
                edge[a].add(new NODE(b, w));
                edge[b].add(new NODE(a, w));
            } catch (Exception e) {
                break;
            }
        }
        int answer = BFS(BFS(1));
        System.out.println(distance[answer]);
    }
}