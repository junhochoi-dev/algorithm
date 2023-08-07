import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();

    static int[] dx = {1, 1, 1, -1, -1, -1, 0, 0};
    static int[] dy = {1, -1, 0, 1, -1, 0, 1, -1};
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[][] arr = new int[N][M];
        boolean[][] visited = new boolean[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int ans = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(visited[i][j]) continue;
                if(arr[i][j] == 0) continue;
                Queue<Integer> queue = new LinkedList<Integer>();
                queue.add(i * M + j);
                visited[i][j] = true;
                while(!queue.isEmpty()){
                    int x = queue.peek() / M;
                    int y = queue.poll() % M;
                    for(int k = 0; k < 8; k++){
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if(arr[tx][ty] == 0) continue;
                        if(visited[tx][ty]) continue;
                        visited[tx][ty] = true;
                        queue.add(tx * M + ty);
                    }
                }
                ans++;
            }
        }
        System.out.println(ans);
    }
}