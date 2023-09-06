import java.io.*;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int[] depth, parent, child;
    static HashMap<Integer, ArrayList<Integer>> edge;
    static int LCA(int a, int b){
        if(depth[a] < depth[b]) {
            int temp = a;
            a = b;
            b = temp;
        }

        while(depth[a] != depth[b]){
            a = parent[a];
        }

        while(a != b){
            a = parent[a];
            b = parent[b];
        }

        return a;
    }
    static int SUBTREE(int curr){
        int sum = 0;
        if(edge.containsKey(curr)){
            for(int next: edge.get(curr)){
                depth[next] = depth[curr] + 1;
                sum += SUBTREE(next);
            }
        }
        return child[curr] = sum + 1;
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");

            st = new StringTokenizer(br.readLine());
            int V = Integer.parseInt(st.nextToken());
            int E = Integer.parseInt(st.nextToken());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            edge = new HashMap<Integer, ArrayList<Integer>>();
            depth = new int[V + 1];
            parent = new int[V + 1];
            child = new int[V + 1];

            st = new StringTokenizer(br.readLine());
            for(int i = 0 ; i < E; i++){
                int p = Integer.parseInt(st.nextToken());
                int c = Integer.parseInt(st.nextToken());
                parent[c] = p;
                if(!edge.containsKey(p)) edge.put(p, new ArrayList<Integer>());
                edge.get(p).add(c);
            }

            SUBTREE(1);

            int lca = LCA(a, b);
            sb.append(lca).append(" ").append(child[lca]).append('\n');
        }
        System.out.println(sb);
    }
}

