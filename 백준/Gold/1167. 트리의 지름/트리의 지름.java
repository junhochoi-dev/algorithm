import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static class adjacentnode{
        int num;
        int dist;
        adjacentnode(int num, int dist){
            this.num = num;
            this.dist = dist;
        }
    }
    static int N, stdnode, prevstdnode, maximumdistance = Integer.MIN_VALUE;
    static Set<Integer> visited;
    static ArrayList<ArrayList<adjacentnode>> edge = new ArrayList<ArrayList<adjacentnode>>();
    static void DFS(int curr, int dist){
        for(adjacentnode nextnode : edge.get(curr)){
            int next = nextnode.num;
            int weight = nextnode.dist;
            if(visited.contains(next)) continue;
            if(maximumdistance < dist + weight) stdnode = next;
            maximumdistance = Math.max(maximumdistance, dist + weight);
            visited.add(next);
            DFS(next, dist + weight);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        N = Integer.parseInt(br.readLine());
        for(int i = 0; i <= N; i++) edge.add(new ArrayList<adjacentnode>());
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            int currnode = Integer.parseInt(st.nextToken());
            while(true){
                int nextnode = Integer.parseInt(st.nextToken());
                if(nextnode == -1) break;
                int dist = Integer.parseInt(st.nextToken());
                edge.get(currnode).add(new adjacentnode(nextnode, dist));
            }
        }
        prevstdnode = -1;
        stdnode = 1;
        while(true){
            visited = new HashSet<Integer>();
            visited.add(stdnode);
            DFS(stdnode, 0);
            if(stdnode == prevstdnode) break;
            prevstdnode = stdnode;
        }
        System.out.println(maximumdistance);
    }
}