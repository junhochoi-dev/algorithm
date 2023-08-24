import java.io.*;
import java.util.*;

public class Solution{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};
        for(int t = 1; t <= 10; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int start = Integer.parseInt(st.nextToken());
            HashMap<Integer, HashSet<Integer>> edge = new HashMap<Integer, HashSet<Integer>>();
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N / 2; i++){
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                if(!edge.containsKey(a)) edge.put(a, new HashSet<Integer>());
                edge.get(a).add(b);
            }
            HashSet<Integer> visited = new HashSet<Integer>();
            Queue<Integer> queue = new ArrayDeque<Integer>();
            visited.add(start);
            queue.add(start);

            int maximum = -1;
            while(!queue.isEmpty()){
                int queueCnt = queue.size();
                maximum = 0;
                while(true){
                    int curr = queue.poll();
                    int prevSize = queue.size();
                    if(edge.containsKey(curr)){
                        for(int next : edge.get(curr)){
                            if(visited.contains(next)) continue;
                            visited.add(next);
                            queue.add(next);
                        }
                    }
                    int afterSize = queue.size();
                    if(prevSize == afterSize) maximum = Math.max(maximum, curr);
                    if(--queueCnt == 0) break;
                }
            }
            sb.append("#").append(t).append(" ").append(maximum).append('\n');
        }
        System.out.println(sb);
    }
}