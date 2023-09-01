import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());

            HashMap<Integer, HashSet<Integer>> edge = new HashMap<Integer, HashSet<Integer>>();
            for(int i = 0 ; i < M; i++){
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                if(!edge.containsKey(a)) edge.put(a, new HashSet<Integer>());
                edge.get(a).add(b);
                if(!edge.containsKey(b)) edge.put(b, new HashSet<Integer>());
                edge.get(b).add(a);
            }
            boolean able = true;
            int[] color = new int[N + 1];
            Queue<Integer> queue = new ArrayDeque<Integer>();
            for(int i = 1; i <= N; i++){
                if(!able) break;
                if(color[i] != 0) continue;
                queue.add(i);
                color[i] = 1;
                while(!queue.isEmpty()){
                    if(!able) break;
                    int curr = queue.poll();
                    if(edge.containsKey(curr)){
                        for(int next : edge.get(curr)){
                            if(color[next] == 0){
                                color[next] = -color[curr];
                                queue.add(next);
                                continue;
                            }
                            if(color[curr] == color[next]) able = false;
                        }
                    }
                }
            }
            sb.append(able ? "possible" : "impossible").append('\n');
        }
        System.out.println(sb);
    }
}