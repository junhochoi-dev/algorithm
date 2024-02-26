import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[] degree = new int[N + 1];
        ArrayList<Integer>[] edge = new ArrayList[N + 1];
        for (int i = 0; i <= N; i++) {
            edge[i] = new ArrayList();
        }
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());
            edge[A].add(B);
            degree[B]++;
        }
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 1; i <= N; i++) {
            if (degree[i] == 0) {
                pq.add(i);
            }
        }
        while (!pq.isEmpty()) {
            int curr = pq.poll();
            sb.append(curr).append(" ");
            for (int next : edge[curr]) {
                degree[next]--;
                if(degree[next] == 0){
                    pq.add(next);
                }
            }
        }
        System.out.println(sb);
    }
}