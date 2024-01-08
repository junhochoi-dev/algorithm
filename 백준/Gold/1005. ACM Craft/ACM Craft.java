import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());

            int[] dp = new int[N];
            int[] weight = new int[N];
            int[] degree = new int[N];

            ArrayList<Integer>[] edge = new ArrayList[N];

            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++){
                weight[i] = Integer.parseInt(st.nextToken());
                dp[i] = weight[i];
                edge[i] = new ArrayList<>();
            }

            for(int i = 0; i < K; i++){
                st = new StringTokenizer(br.readLine());
                int s = Integer.parseInt(st.nextToken()) - 1;
                int e = Integer.parseInt(st.nextToken()) - 1;
                degree[e]++;
                edge[s].add(e);
            }

            Queue<Integer> queue = new ArrayDeque<>();
            for(int i = 0; i < N; i++){
                if(degree[i] == 0){
                    queue.add(i);
                }
            }
            while(!queue.isEmpty()){
                int curr = queue.poll();
                for(int next : edge[curr]){
                    degree[next]--;
                    dp[next] = Math.max(dp[next], dp[curr] + weight[next]);
                    if(degree[next] == 0){
                        queue.add(next);
                    }
                }
            }

            sb.append(dp[Integer.parseInt(br.readLine()) - 1]).append('\n');
        }
        System.out.print(sb);
    }
}