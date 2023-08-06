import java.io.*;
import java.util.*;
import java.util.concurrent.LinkedBlockingQueue;

public class Main{
    static int N, cnt = 0;
    static int[] ans;
    static Set<Integer> visited = new HashSet<Integer>();
    static Set<Integer>[] edge;
    static void dfs(int curr, int prev){
        if(ans[curr] != ans[prev]) cnt++;
        for(int next : edge[curr]){
            if(visited.contains(next)) continue;
            visited.add(next);
            dfs(next, curr);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        N = Integer.parseInt(br.readLine());
        ans = new int[N + 1];
        edge = new HashSet[N + 1];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            ans[i] = Integer.parseInt(st.nextToken());
            edge[i] = new HashSet<Integer>();
        }
        for(int i = 0; i < N - 1; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            edge[s].add(e);
            edge[e].add(s);
        }
        visited.add(1);
        dfs(1, 0);
        System.out.println(cnt);
    }
}
