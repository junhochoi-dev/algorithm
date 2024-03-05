import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N;
    static boolean[] visited;
    static ArrayList<int[]>[] edge;

    static int DFS(int curr){
        int sum = 0;
        for (int[] temp: edge[curr]) {
            int next = temp[0];
            int weight = temp[1];
            if(visited[next]) continue;
            visited[next] = true;
            sum += Math.min(weight, DFS(next));
        }
        return sum == 0 ? Integer.MAX_VALUE : sum;
    }

    public static void main(String[] args) throws IOException {
        N = Integer.parseInt(br.readLine());
        edge = new ArrayList[N + 1];
        visited = new boolean[N + 1];
        for (int i = 0; i <= N; i++) {
            edge[i] = new ArrayList();
        }
        for (int i = 0; i < N - 1; i++) {
            st = new StringTokenizer(br.readLine());
            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());
            int V = Integer.parseInt(st.nextToken());
            edge[A].add(new int[]{B, V});
            edge[B].add(new int[]{A, V});
        }
        visited[1] = true;
        System.out.println(DFS(1));
    }
}