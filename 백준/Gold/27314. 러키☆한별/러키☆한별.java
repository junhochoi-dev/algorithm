import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, M;
    static char[][] arr;
    static int[] dx = {1, -1, 0, 0}, dy = {0, 0, 1, -1};
    static int[][][] distance;

    static void BFS(int idx, int start) {
        Queue<Integer> queue = new ArrayDeque<>();
        boolean[] visited = new boolean[N * M];
        visited[start] = true;
        queue.add(start);
        while (!queue.isEmpty()) {
            int curr = queue.poll();
            int x = curr / M;
            int y = curr % M;
            for (int k = 0; k < 4; k++) {
                int tx = x + dx[k];
                int ty = y + dy[k];
                if (tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if (visited[tx * M + ty]) continue;

                if (arr[tx][ty] == 'X') continue;
                distance[idx][tx][ty] = distance[idx][x][y] + 1;
                visited[tx * M + ty] = true;
                queue.add(tx * M + ty);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        int hanbyul = 0;
        arr = new char[N][M];
        ArrayList<Integer> exit = new ArrayList<>();
        ArrayList<Integer> friend = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            String temp = br.readLine();
            for (int j = 0; j < M; j++) {
                arr[i][j] = temp.charAt(j);
                if (arr[i][j] == '#') exit.add(i * M + j);
                if (arr[i][j] == 'H') hanbyul = i * M + j;
                if (arr[i][j] == 'P') friend.add(i * M + j);
            }
        }

        distance = new int[friend.size() + 1][N][M];
        for (int i = 0; i < friend.size(); i++) {
            BFS(i + 1, friend.get(i));
        }
        BFS(0, hanbyul);

        int answer = 0;
        for (int i = 0; i < exit.size(); i++) {
            int count = 0;
            int x = exit.get(i) / M;
            int y = exit.get(i) % M;
            int std = distance[0][x][y];
            for (int j = 0; j < friend.size(); j++) {
                if(distance[j + 1][x][y] == 0) continue;
                if(std >= distance[j + 1][x][y]) count++;
            }
            answer = Math.max(answer, count);
        }
        System.out.println(answer);
    }
}