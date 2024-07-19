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
        int[][] map = new int[N][M];
        boolean[][] visited = new boolean[N][M];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                map[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int[] dx = {1, 1, 1, 0, 0, -1, -1, -1};
        int[] dy = {1, -1, 0, 1, -1, 1, -1, 0};
        int answer = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if(visited[i][j]) continue;
                boolean peak = true;

                Queue<Integer> queue = new ArrayDeque<>();
                queue.add(i * M + j);
                visited[i][j] = true;
                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    int x = curr / M;
                    int y = curr % M;
                    for (int k = 0; k < 8; k++) {
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if(map[tx][ty] > map[x][y]) peak = false;
                        else{
                            if(!visited[tx][ty] && map[tx][ty] == map[x][y]){
                                visited[tx][ty] = true;
                                queue.add(tx * M + ty);
                            }
                        }
                    }
                }

                if(peak) answer++;
            }
        }
        System.out.println(answer);
    }
}