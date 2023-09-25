import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        Queue<Integer> queue;
        HashSet<Integer> answer;
        HashMap<Integer, ArrayList<Integer>> front, back;
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());

            int[] dist = new int[N + 1];
            Arrays.fill(dist, Integer.MAX_VALUE);

            front = new HashMap<Integer, ArrayList<Integer>>();
            back = new HashMap<Integer, ArrayList<Integer>>();

            for(int i = 0; i < M; i++){
                st = new StringTokenizer(br.readLine());
                int from = Integer.parseInt(st.nextToken());
                int to = Integer.parseInt(st.nextToken());
                if(!front.containsKey(from)) front.put(from, new ArrayList<Integer>());
                front.get(from).add(to);
                if(!back.containsKey(to)) back.put(to, new ArrayList<Integer>());
                back.get(to).add(from);
            }

            queue = new ArrayDeque<Integer>();
            queue.add(1);
            dist[1] = 0;
            while(!queue.isEmpty()){
                int curr = queue.poll();
                if(front.containsKey(curr)){
                    for(int next : front.get(curr)){
                        if(dist[next] > dist[curr] + 1){
                            dist[next] = dist[curr] + 1;
                            queue.add(next);
                        }
                    }
                }
            }

            queue = new ArrayDeque<Integer>();
            queue.add(N);
            while(!queue.isEmpty()){
                int curr = queue.poll();
                if(back.containsKey(curr)){
                    for(int next : back.get(curr)){
                        if(dist[next] == -1) continue;
                        if(dist[curr] - 1 == dist[next]){
                            queue.add(next);
                        }
                    }
                }
                dist[curr] = -1;
            }
            for(int i = 1; i <= N; i++) if(dist[i] == -1) sb.append(i).append(" ");
            sb.append('\n');
        }
        System.out.println(sb);
    }
}