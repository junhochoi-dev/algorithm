import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        while(true){
            int N = Integer.parseInt(br.readLine());
            if(N == 0) break;

            char[] kinds = new char[N + 1];
            int[] value = new int[N + 1];
            ArrayList<Integer>[] edge = new ArrayList[N + 1];
            edge[0] = new ArrayList<>();
            for(int i = 1; i <= N; i++){
                st = new StringTokenizer(br.readLine());
                edge[i] = new ArrayList<>();
                kinds[i] = st.nextToken().charAt(0);
                value[i] = Integer.parseInt(st.nextToken());
                while(true){
                    int v = Integer.parseInt(st.nextToken());
                    if(v == 0) break;
                    edge[i].add(v);
                }
            }

            if(kinds[1] == 'T') {
                System.out.println("NO");
                continue;
            }

            boolean answer = false;

            Queue<int[]> queue = new ArrayDeque<>();
            int[] visited = new int[N + 1];
            Arrays.fill(visited, -1);
            queue.add(new int[]{1, 0});
            visited[1] = 0;

            while(!queue.isEmpty()){
                int[] temp = queue.poll();
                int curr = temp[0];
                int cost = temp[1];
                if(curr == N) answer = true;
                for(int next: edge[curr]){
                    if(kinds[next] == 'E') {
                        if(visited[next] >= cost) continue;
                        visited[next] = cost;
                        queue.add(new int[]{next, cost});
                    }
                    if(kinds[next] == 'L') {
                        if(visited[next] >= Math.max(cost, value[next])) continue;
                        visited[next] = Math.max(cost, value[next]);
                        queue.add(new int[]{next, Math.max(cost, value[next])});
                    }
                    if(kinds[next] == 'T'){
                        if(value[next] > cost) continue;
                        if(visited[next] >= cost - value[next]);
                        visited[next] = cost - value[next];
                        queue.add(new int[]{next, cost - value[next]});
                    }
                }
            }
            System.out.println(answer ? "Yes" : "No");
        }
    }
}
