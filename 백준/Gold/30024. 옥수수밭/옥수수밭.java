import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class CORN implements Comparable<CORN> {
        int location;
        int weight;
        CORN(int location, int weight){
            this.location = location;
            this.weight = weight;
        }
        @Override
        public int compareTo(CORN o) {
            return -Integer.compare(this.weight, o.weight);
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        int arr[][] = new int[N][M];
        boolean vis[][] = new boolean[N][M];
        PriorityQueue<CORN> pq = new PriorityQueue<CORN>();

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());

                if(i == 0 || i == N - 1 || j == 0 || j == M - 1){
                    vis[i][j] = true;
                    pq.add(new CORN(i * M + j, arr[i][j]));
                }
            }
        }

        int K = Integer.parseInt(br.readLine());
        int cnt = 1;
        while(cnt <= K){
            CORN curr = pq.poll();
            int x = curr.location / M;
            int y = curr.location % M;
            sb.append(x + 1).append(" ").append(y + 1).append('\n');
            for(int k = 0; k < 4; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(vis[tx][ty]) continue;
                vis[tx][ty] = true;
                pq.add(new CORN(tx * M + ty, arr[tx][ty]));
            }
            cnt++;
        }
        System.out.println(sb);
    }
}