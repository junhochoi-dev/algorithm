import com.sun.corba.se.spi.servicecontext.UEInfoServiceContext;

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
            sb.append('#').append(t).append(' ');
            int N = Integer.parseInt(br.readLine());
            int M = Integer.parseInt(br.readLine());

            int visitedCnt[] = new int[N + 1];
            HashMap<Integer, ArrayList<Integer>> bottomup = new HashMap<Integer, ArrayList<Integer>>();
            HashMap<Integer, ArrayList<Integer>> topdown = new HashMap<Integer, ArrayList<Integer>>();
            for(int i = 0; i < M; i++){
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());

                if(!bottomup.containsKey(a)) bottomup.put(a, new ArrayList<Integer>());
                bottomup.get(a).add(b);

                if(!topdown.containsKey(b)) topdown.put(b, new ArrayList<Integer>());
                topdown.get(b).add(a);
            }

            for(int i = 1; i <= N; i++){
                Queue<Integer> queue = new ArrayDeque<Integer>();
                HashSet<Integer> visited = new HashSet<Integer>();
                queue.add(i);
                visited.add(i);
                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    if(bottomup.containsKey(curr)){
                        for(int next : bottomup.get(curr)){
                            if(visited.contains(next)) continue;
                            visitedCnt[next]++;
                            visited.add(next);
                            queue.add(next);
                        }
                    }
                }

                queue = new ArrayDeque<Integer>();
                visited = new HashSet<Integer>();
                queue.add(i);
                visited.add(i);
                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    if(topdown.containsKey(curr)){
                        for(int next : topdown.get(curr)){
                            if(visited.contains(next)) continue;
                            visitedCnt[next]++;
                            visited.add(next);
                            queue.add(next);
                        }
                    }
                }
            }
            int answer = 0;
            for (int i = 1; i <= N; i++) {
                if (visitedCnt[i] == N - 1) answer++;
            }
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}