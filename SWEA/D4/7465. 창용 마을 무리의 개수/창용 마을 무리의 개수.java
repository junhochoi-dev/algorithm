
import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");

            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());

            int groupNum[] = new int[N + 1];

            HashMap<Integer, ArrayList<Integer>> edge = new HashMap<Integer, ArrayList<Integer>>();
            for(int i = 0; i < M; i++){
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                if(!edge.containsKey(a)) edge.put(a, new ArrayList<Integer>());
                if(!edge.containsKey(b)) edge.put(b, new ArrayList<Integer>());
                edge.get(a).add(b);
                edge.get(b).add(a);
            }

            int GN = 0;
            for(int i = 1; i <= N; i++){
                if(groupNum[i] != 0) continue;
                GN++;

                Queue<Integer> queue = new ArrayDeque<Integer>();
                queue.add(i);
                groupNum[i] = GN;

                while(!queue.isEmpty()){
                    int curr = queue.poll();

                    if(edge.containsKey(curr)){
                        for(int next: edge.get(curr)){
                            if(groupNum[next] != 0) continue;
                            groupNum[next] = GN;
                            queue.add(next);
                        }
                    }
                }
            }
            sb.append(GN).append('\n');
        }
        System.out.println(sb);
    }
}