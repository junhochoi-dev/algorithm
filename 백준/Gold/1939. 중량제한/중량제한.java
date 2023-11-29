import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class NODE{
        int next;
        int weight;
        NODE(int next, int weight){
            this.next = next;
            this.weight = weight;
        }
    }

    static int N, M;
    static ArrayList<NODE>[] edge;
    static boolean[] visited;

    static void BFS(int s, int std){

        Arrays.fill(visited, false);
        Queue<Integer> queue = new ArrayDeque<Integer>();

        queue.add(s);
        visited[s] = true;

        while(!queue.isEmpty()){
            int curr = queue.poll();

            for(NODE nextnode : edge[curr]){
                if(visited[nextnode.next]) continue;
                if(nextnode.weight < std) continue;

                queue.add(nextnode.next);
                visited[nextnode.next] = true;
            }
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        edge = new ArrayList[N + 1];
        visited = new boolean[N + 1];

        for(int i = 0; i <= N; i++) edge[i] = new ArrayList<NODE>();
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            edge[a].add(new NODE(b, w));
            edge[b].add(new NODE(a, w));
        }

        st = new StringTokenizer(br.readLine());
        int s = Integer.parseInt(st.nextToken());
        int e = Integer.parseInt(st.nextToken());

        int answer = 0;
        int low = 1;
        int high = 1_000_000_000;
        while(low <= high){
            int mid = (low + high) / 2;
            BFS(s, mid);
            if(visited[e]) {
                low = mid + 1;
                answer = Math.max(answer, mid);
            } else {
                high = mid - 1;
            }
        }

        System.out.println(answer);
    }
}