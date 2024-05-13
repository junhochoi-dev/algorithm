import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int answer = 0;
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};
        st = new StringTokenizer(br.readLine());
        int R = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        char[][] map = new char[R][C];
        boolean[][] visited = new boolean[R][C];
        for (int i = 0; i < R; i++) {
            String tmp = br.readLine();
            for (int j = 0; j < C; j++) {
                map[i][j] = tmp.charAt(j);
            }
        }
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if(map[i][j] != '#') continue;
                if(visited[i][j]) continue;
                visited[i][j] = true;
                answer++;
                Queue<int[]> queue = new ArrayDeque<>();
                queue.add(new int[]{i, j});
                while(!queue.isEmpty()){
                    int x = queue.peek()[0];
                    int y = queue.peek()[1];
                    queue.poll();
                    for (int k = 0; k < 4; k++) {
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
                        if(visited[tx][ty]) continue;
                        if(map[tx][ty] != '#') continue;
                        visited[tx][ty] = true;
                        queue.add(new int[]{tx, ty});
                    }
                }
            }
        }
        System.out.println(answer);
    }
}