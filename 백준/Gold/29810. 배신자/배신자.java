import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, M, X, cnt, xcnt;
    static boolean[] visited;
    static ArrayList<Integer>[] edge;

    static void DFS(int curr) {
        cnt++; visited[curr] = true;
        for (int next : edge[curr]) {
            if (next == X) xcnt++;
            if (visited[next]) continue;
            DFS(next);
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        visited = new boolean[N + 1];
        edge = new ArrayList[N + 1];

        for (int i = 0; i <= N; i++) {
            edge[i] = new ArrayList<>();
        }
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());
            edge[A].add(B);
            edge[B].add(A);
        }

        int answer = 0;
        X = Integer.parseInt(br.readLine());
        visited[X] = true;
        for (int i = 1; i <= N; i++) {
            if(visited[i]) continue;
            cnt = xcnt = 0;
            DFS(i);
            answer = Math.max(answer, cnt + (xcnt > 1 ? 0 : xcnt));
        }
        System.out.println(answer);
    }
}