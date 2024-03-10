import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int[] degree = new int[N + 1];
        int[] sumTime = new int[N + 1];
        int[] buildTime = new int[N + 1];
        ArrayList<Integer>[] edge = new ArrayList[N + 1];
        for (int i = 0; i <= N; i++) {
            edge[i] = new ArrayList<Integer>();
        }
        for (int curr = 1; curr <= N; curr++) {
            st = new StringTokenizer(br.readLine());
            sumTime[curr] = buildTime[curr] = Integer.parseInt(st.nextToken());
            while (st.hasMoreTokens()) {
                int prev = Integer.parseInt(st.nextToken());
                if(prev == -1) continue;
                edge[prev].add(curr);
                degree[curr]++;
            }
        }
        Queue<Integer> queue = new ArrayDeque<>();
        for (int i = 1; i <= N; i++) {
            if(degree[i] == 0) queue.add(i);
        }
        while(!queue.isEmpty()){
            int curr = queue.poll();
            for (int next: edge[curr]) {
                degree[next]--;
                sumTime[next] = Math.max(sumTime[next], sumTime[curr] + buildTime[next]);
                if(degree[next] == 0) queue.add(next);
            }
        }
        for (int i = 1; i <= N; i++) {
            sb.append(sumTime[i]).append('\n');
        }
        System.out.println(sb);
    }
}