import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, K, count = 0, answer = Integer.MAX_VALUE;
    static boolean[] visited;
    static int[][] dist;
    static void FloydWarshall(){
        for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(i == j) continue;
                    dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    static void BackTracking(int s, int sum){
        if(count == N){
            answer = Math.min(answer, sum);
            return;
        }
        for(int k = 0; k < N; k++){
            if(visited[k]) continue;
            visited[k] = true;
            count++;
            BackTracking(k, sum + dist[s][k]);
            count--;
            visited[k] = false;
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());

        visited = new boolean[N];
        dist = new int[N][N];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < N; j++){
                dist[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        FloydWarshall();

        count = 1;
        visited[K] = true;
        BackTracking(K, 0);

        System.out.println(answer);
    }
}
