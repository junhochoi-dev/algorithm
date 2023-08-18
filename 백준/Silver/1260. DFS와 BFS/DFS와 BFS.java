import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, V;
    static HashSet<Integer> visited;
    static ArrayList<ArrayList<Integer>> edge = new ArrayList<ArrayList<Integer>>();
    static void DFS(int curr){
        sb.append(curr).append(" ");
        edge.get(curr).sort(null);
        for(int next : edge.get(curr)){
            if(visited.contains(next)) continue;
            visited.add(next);
            DFS(next);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        V = Integer.parseInt(st.nextToken());
        for (int i = 0; i <= N; i++) edge.add(new ArrayList<Integer>());
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            edge.get(a).add(b);
            edge.get(b).add(a);
        }
        //DFS
        visited = new HashSet<Integer>();
        visited.add(V);
        DFS(V);
        sb.append('\n');
        //BFS
        visited = new HashSet<Integer>();
        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(V);
        visited.add(V);
        while (!queue.isEmpty()) {
            int curr = queue.poll();
            sb.append(curr).append(" ");
            edge.get(curr).sort(null);
            for (int next : edge.get(curr)) {
                if (visited.contains(next)) continue;
                visited.add(next);
                queue.add(next);
            }
        }
        sb.append('\n');
        System.out.println(sb);
    }
}