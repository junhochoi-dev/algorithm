import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, M, K, SIRU;
    static int[][] arr, dist;
    static ArrayList<Integer> mannequin, chair;

    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};

    static void mannequinBFS() {
        boolean[][] visited = new boolean[N][M];
        Queue<int[]> queue = new ArrayDeque<>();
        for (int i = 0; i < mannequin.size(); i++) {
            queue.add(new int[]{mannequin.get(i), K});
            visited[mannequin.get(i) / M][mannequin.get(i) % M] = true;
        }
        while (!queue.isEmpty()) {
            int[] curr = queue.poll();
            int x = curr[0] / M;
            int y = curr[0] % M;
            int hp = curr[1];
            if(hp == 0) continue;
            for (int k = 0; k < 4; k++) {
                int tx = x + dx[k];
                int ty = y + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(visited[tx][ty]) continue;
                queue.add(new int[]{tx * M + ty, hp - 1});
                visited[tx][ty] = true;
                arr[tx][ty] = 3;
            }
        }
    }

    static void siruBFS() {
        Queue<Integer> queue = new ArrayDeque<>();
        dist[SIRU / M][SIRU % M] = 0;
        queue.add(SIRU);
        while (!queue.isEmpty()) {
            int curr = queue.poll();
            int x = curr / M;
            int y = curr % M;
            for (int k = 0; k < 4; k++) {
                int tx = x + dx[k];
                int ty = y + dy[k];
                int next = tx * M + ty;
                if (tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if (arr[tx][ty] == 1 || arr[tx][ty] == 3) continue;
                if (dist[tx][ty] <= dist[x][y] + 1) continue;
                dist[tx][ty] = dist[x][y] + 1;
                queue.add(next);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());

        arr = new int[N][M];
        dist = new int[N][M];
        chair = new ArrayList<>();
        mannequin = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
                dist[i][j] = Integer.MAX_VALUE;
                if (arr[i][j] == 2) chair.add(i * M + j);
                if (arr[i][j] == 3) mannequin.add(i * M + j);
                if (arr[i][j] == 4) SIRU = i * M + j;
            }
        }

        mannequinBFS();
        siruBFS();

        int answer = Integer.MAX_VALUE;
        for (int i = 0; i < chair.size(); i++) {
            int x = chair.get(i) / M;
            int y = chair.get(i) % M;
            answer = Math.min(answer, dist[x][y]);
        }
        System.out.println(answer == Integer.MAX_VALUE ? -1 : answer);
    }
}