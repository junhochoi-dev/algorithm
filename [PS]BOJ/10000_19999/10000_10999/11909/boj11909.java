import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class NODE implements Comparable<NODE> {
        int x, y, distance;
        public NODE(int x, int y, int distance) {
            this.x = x;
            this.y = y;
            this.distance = distance;
        }
        @Override
        public int compareTo(NODE o) {
            return Integer.compare(this.distance, o.distance);
        }
    }
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[][] arr = new int[N][N];
        int[][] dist = new int[N][N];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
                dist[i][j] = Integer.MAX_VALUE;
            }
        }
        int[] dx = {1, 0};
        int[] dy = {0, 1};
        dist[0][0] = 0;
        int answer = Integer.MAX_VALUE;
        PriorityQueue<NODE> pq = new PriorityQueue<>();
        pq.add(new NODE(0, 0, 0));
        while(!pq.isEmpty()){
            NODE curr = pq.poll();
            if(curr.x == N - 1 && curr.y == N - 1) {
                answer = Math.min(answer, curr.distance);
                continue;
            }
            for (int k = 0; k < 2; k++){
                int tx = curr.x + dx[k];
                int ty = curr.y + dy[k];
                if (tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                if(arr[tx][ty] < arr[curr.x][curr.y]) {
                    if(curr.distance < dist[tx][ty]) {
                        dist[tx][ty] = curr.distance;
                        pq.add(new NODE(tx, ty, curr.distance));
                    }
                } else {
                    int gap = Math.abs(arr[curr.x][curr.y] - arr[tx][ty]) + 1;
                    if(curr.distance + gap < dist[tx][ty]) {
                        dist[tx][ty] = curr.distance + gap;
                        pq.add(new NODE(tx, ty, curr.distance + gap));
                    }
                }
            }
        }
        System.out.println(answer);
    }
}