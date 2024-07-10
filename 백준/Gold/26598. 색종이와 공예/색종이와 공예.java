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

        char[][] map = new char[N][M];
        boolean[][] visited = new boolean[N][M];
        for (int i = 0; i < N; i++) {
            String temp = br.readLine();
            for (int j = 0; j < M; j++) {
                map[i][j] = temp.charAt(j);
            }
        }

        boolean answer = true;
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if(visited[i][j]) continue;
                int count = 1;
                int maximum_row = i;
                int maximum_col = j;

                Queue<Integer> queue = new ArrayDeque<>();
                queue.add(i * M + j);
                visited[i][j] = true;

                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    int x = curr / M;
                    int y = curr % M;

                    for (int k = 0; k < 4; k++) {
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if(visited[tx][ty]) continue;
                        if(map[i][j] != map[tx][ty]) continue;
                        count++;
                        visited[tx][ty] = true;
                        maximum_row = Math.max(maximum_row, tx);
                        maximum_col = Math.max(maximum_col, ty);
                        queue.add(tx * M + ty);
                    }
                }

                int rectangle = (maximum_row - i + 1) * (maximum_col - j + 1);
                if(rectangle != count) answer = false;
                if(!answer) break;
            }
            if(!answer) break;
        }
        System.out.println(answer ? "dd" : "BaboBabo");
    }
}