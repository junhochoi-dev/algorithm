import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int[] dist;
    static HashSet<Integer> nocycle = new HashSet<Integer>();
    static ArrayList<HashSet<Integer>> edge = new ArrayList<HashSet<Integer>>();
    static ArrayList<HashSet<Integer>> virtualedge = new ArrayList<HashSet<Integer>>();
    static HashSet<Integer> visited;
    static void DFS(int start, int curr, int distance){
        for(int next : edge.get(curr)){
            if(visited.contains(next)) continue;
            if(!nocycle.contains(next)){
                dist[start] = distance + 1;
                return;
            }
            visited.add(next);
            DFS(start, next, distance + 1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        dist = new int[N + 1];

        for(int i = 0; i <= N; i++){
            edge.add(new HashSet<Integer>());
            virtualedge.add(new HashSet<Integer>());
        }

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            edge.get(a).add(b);
            edge.get(b).add(a);
            virtualedge.get(a).add(b);
            virtualedge.get(b).add(a);
            if(edge.get(a).size() == 1) nocycle.add(a);
            else nocycle.remove(a);
            if(edge.get(b).size() == 1) nocycle.add(b);
            else nocycle.remove(b);
        }

        Queue<Integer> queue = new LinkedList<Integer>();
        for(int node : nocycle) queue.add(node);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            for(int next : virtualedge.get(curr)){
                if(nocycle.contains(next)) continue;
                virtualedge.get(curr).remove(next);
                virtualedge.get(next).remove(curr);
                if(virtualedge.get(next).size() != 1) continue;
                nocycle.add(next);
                queue.add(next);
            }
        }

        for(int start : nocycle){
            visited = new HashSet<Integer>();
            visited.add(start);
            DFS(start, start, 0);
        }
        for(int i = 1; i <= N; i++) sb.append(dist[i]).append(" ");
        System.out.println(sb);
    }
}
