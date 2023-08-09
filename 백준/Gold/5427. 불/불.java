import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, sanggeun, minimum;
    static int[] dx = {1, -1, 0, 0}, dy = {0, 0, 1, -1};
    static char[][] arr = new char[1000][1000];
    static int[][] firetime = new int[1000][1000];
    static int[][] dist = new int[1000][1000];
    static Queue<Integer> queue = new LinkedList<Integer>();
    static void sangguenDFS(int x, int y, int time){
        if(time > minimum) return;
        for(int k = 0; k < 4; k++){
            int tx = x + dx[k];
            int ty = y + dy[k];
            if (tx < 0 || ty < 0 || tx >= N || ty >= M) {
                minimum = Math.min(minimum, time + 1);
                return;
            }
            if(arr[tx][ty] == '#') continue;
            if(arr[tx][ty] == '@') continue;
            if(firetime[tx][ty] <= time + 1) continue;
            if(time + 1 >= dist[tx][ty]) continue;
            dist[tx][ty] = time + 1;
            sangguenDFS(tx, ty, time + 1);
        }
    }
    static void fireBFS(){
        while(!queue.isEmpty()){
            int p = queue.poll();
            int x = p / M;
            int y = p % M;
            for(int k = 0; k < 4; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(firetime[tx][ty] <= firetime[x][y] + 1) continue;
                if(arr[tx][ty] == '#') continue;
                if(arr[tx][ty] == '@') continue;
                firetime[tx][ty] = firetime[x][y] + 1;
                queue.add(tx * M + ty);
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            minimum = Integer.MAX_VALUE;
            st = new StringTokenizer(br.readLine());
            M = Integer.parseInt(st.nextToken());
            N = Integer.parseInt(st.nextToken());
            for(int i = 0; i < N; i++){
                String temp = br.readLine();
                for(int j = 0; j < M; j++){
                    arr[i][j] = temp.charAt(j);
                    dist[i][j] = Integer.MAX_VALUE;
                    firetime[i][j] = Integer.MAX_VALUE;
                    if(arr[i][j] == '*') {
                        firetime[i][j] = 0;
                        queue.add(i * M + j);
                    }
                    if(arr[i][j] == '@') sanggeun = i * M + j;
                }
            }

            fireBFS();

            dist[sanggeun / M][sanggeun % M] = 0;
            sangguenDFS(sanggeun / M, sanggeun % M, 0);
            sb.append(minimum == Integer.MAX_VALUE ? "IMPOSSIBLE" : minimum).append("\n");
        }
        System.out.print(sb);
    }
}