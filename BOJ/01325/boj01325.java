import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, hacked;
    static int[] visited;
    static Set<Integer> start = new HashSet<Integer>();
    static ArrayList<ArrayList<Integer>> edge = new ArrayList<ArrayList<Integer>>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        for(int i = 0; i <= N; i++) edge.add(new ArrayList<Integer>());
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int e = Integer.parseInt(st.nextToken());
            int s = Integer.parseInt(st.nextToken());
            edge.get(s).add(e);
            start.add(s);
        }
        int maximum = Integer.MIN_VALUE;
        int[] hackcnt = new int[N + 1];
        for(int s : start){
            hacked = 0;
            visited = new int[N + 1];
            Queue<Integer> queue = new LinkedList<Integer>();
            queue.add(s);
            visited[s] = 1;
            while(!queue.isEmpty()){
                int curr = queue.poll();
                hacked++;
                if(edge.get(curr) == null) continue;
                for(int next : edge.get(curr)){
                    if(visited[next] == 1) continue;
                    visited[next] = 1;
                    queue.add(next);
                }
            }
            maximum = Math.max(maximum, hacked);
            hackcnt[s] = hacked;
        }
        for(int i = 1; i <= N; i++){
            if(maximum == hackcnt[i]) sb.append(i).append(" ");
        }
        System.out.println(sb);
    }
}
