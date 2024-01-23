import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int INF = Integer.MAX_VALUE;

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int T = Integer.parseInt(st.nextToken());

        int[][] dist = new int[N][N];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                dist[i][j] = INF;
            }
        }
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int u = Integer.parseInt(st.nextToken()) - 1;
            int v = Integer.parseInt(st.nextToken()) - 1;
            int h = Integer.parseInt(st.nextToken());
            dist[u][v] = h;
        }

        for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                if(dist[i][k] == INF) continue;
                for(int j = 0; j < N; j++){
                    if(dist[k][j] == INF) continue;
                    dist[i][j] = Math.min(dist[i][j], Math.max(dist[i][k], dist[k][j]));
                }
            }
        }

        for(int i = 0; i < T; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken()) - 1;
            int e = Integer.parseInt(st.nextToken()) - 1;
            sb.append(dist[s][e] == INF ? -1 : dist[s][e]).append('\n');
        }
        System.out.print(sb);
    }
}
