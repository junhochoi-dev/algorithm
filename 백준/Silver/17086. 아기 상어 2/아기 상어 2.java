import java.io.*;
import java.util.*;

public class Main{
    StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] dx = {1, 1, 1, -1, -1, -1, 0, 0};
    static int[] dy = {1, -1, 0, 1, -1, 0, 1, -1};
    static int[][] arr = new int[50][50];
    static int[][] dist = new int[50][50];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        Queue<int[]> queue = new LinkedList<int []>();
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
                dist[i][j] = Integer.MAX_VALUE;
                if(arr[i][j] == 1) {
                    dist[i][j] = 0;
                    queue.add(new int[]{i, j});
                }
            }
        }
        while(!queue.isEmpty()){
            int[] curr = queue.poll();
            int x = curr[0];
            int y = curr[1];
            for(int k = 0; k < 8; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(dist[x][y] + 1 >= dist[tx][ty]) continue;
                dist[tx][ty] = dist[x][y] + 1;
                queue.add(new int[]{tx, ty});
            }
        }
        int maximum = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                maximum = Math.max(maximum, dist[i][j]);
            }
        }
        System.out.println(maximum);
    }
}
