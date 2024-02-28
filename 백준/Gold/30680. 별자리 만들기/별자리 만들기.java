import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static ArrayList<Integer> leafDepth;
    static ArrayList<Integer>[] edge;
    static boolean[] visited;

    static void DFS(int curr, int depth) {
        int count = 0;
        for (int next : edge[curr]) {
            if(visited[next]) {
                count++;
                continue;
            }
            visited[next] = true;
            DFS(next, depth + 1);
        }

        if (edge[curr].size() == count) {
            leafDepth.add(depth);
        }
    }

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(0);

        for (int i = 0; i < N; i++) {
            int A = Integer.parseInt(br.readLine());

            leafDepth = new ArrayList<>();
            edge = new ArrayList[A + 1];
            visited = new boolean[A + 1];

            for (int j = 0; j <= A; j++) {
                edge[j] = new ArrayList<>();
            }

            for (int j = 0; j < A - 1; j++) {
                st = new StringTokenizer(br.readLine());
                int v = Integer.parseInt(st.nextToken());
                int w = Integer.parseInt(st.nextToken());
                edge[v].add(w);
                edge[w].add(v);
            }

            visited[1] = true;
            DFS(1, 0);

            int rootDepth = pq.poll();
            for (int depth : leafDepth) {
                pq.add(rootDepth + depth + 1);
            }
        }
        while (true) {
            int answer = pq.poll();
            if (pq.isEmpty()) {
                System.out.println(answer);
                break;
            }
        }
    }
}