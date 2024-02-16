import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int[] distance;
    static ArrayList<ArrayList<int []>> edge = new ArrayList<ArrayList<int []>>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        distance = new int[N + 1];
        for(int i = 0; i <= N; i++) {
            distance[i] = Integer.MAX_VALUE;
            edge.add(new ArrayList<int []>());
        }

        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            edge.get(a).add(new int[]{b, w});
            edge.get(b).add(new int[]{a, w});
        }

        st = new StringTokenizer(br.readLine());
        int s = Integer.parseInt(st.nextToken());
        int t = Integer.parseInt(st.nextToken());
        distance[s] = 0;
        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(s);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            for(int[] temp: edge.get(curr)){
                int next = temp[0];
                int weight = temp[1];
                if(distance[curr] + weight < distance[next]){
                    distance[next] = distance[curr] + weight;
                    queue.add(next);
                }
            }
        }
        System.out.println(distance[t]);
    }
}