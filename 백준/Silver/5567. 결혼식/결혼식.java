import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] dist;
    static ArrayList<ArrayList<Integer>> edge = new ArrayList<ArrayList<Integer>>();
    static void DFS(int curr, int distance){
        for(int next : edge.get(curr)){
            if(dist[next] <= distance + 1) continue;
            dist[next] = distance + 1;
            DFS(next, distance + 1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        N = Integer.parseInt(br.readLine());
        dist = new int[N + 1];
        for(int i = 0; i <= N; i++) {
            edge.add(new ArrayList<Integer>());
            dist[i] = Integer.MAX_VALUE;
        }
        M = Integer.parseInt(br.readLine());
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            edge.get(a).add(b);
            edge.get(b).add(a);
        }
        DFS(1, 0);
        int answer = 0;
        for(int i = 2; i <= N; i++){
            if(dist[i] <= 2) answer++;
        }
        System.out.println(answer);
    }
}