import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;


    static int N, M;
    static boolean out(int x, int y){
        return x < 0 || y < 0 || x >= N || y >= M;
    }
    public static void main(String[] args) throws IOException {
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};

        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        int c1 = -1;
        int c2 = -1;
        boolean[][] wall = new boolean[N][M];
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            for(int j = 0; j < M; j++){
                if(temp.charAt(j) == '#') wall[i][j] = true;
                if(temp.charAt(j) == 'o' && c1 == -1) c1 = i * M + j;
                if(temp.charAt(j) == 'o' && c1 != -1) c2 = i * M + j;
            }
        }

        int answer = Integer.MAX_VALUE;

        HashMap<Integer, Integer> visisted = new HashMap<>();
        visisted.put(c1 * N * M + c2, 0);

        Queue<int[]> queue = new ArrayDeque<int[]>();
        queue.add(new int[]{c1, c2, 0});

        while(!queue.isEmpty()){
            int[] curr = queue.poll();

            for(int k = 0; k < 4; k++){
                boolean out1 = false;
                boolean out2 = false;

                int c1x = curr[0] / M;
                int c1y = curr[0] % M;
                int c2x = curr[1] / M;
                int c2y = curr[1] % M;
                int cnt = curr[2];

                if(out(c1x + dx[k], c1y + dy[k])){
                    out1 = true;
                } else {
                    if(!wall[c1x + dx[k]][c1y + dy[k]]){
                        c1x += dx[k];
                        c1y += dy[k];
                    }
                }
                if(out(c2x + dx[k], c2y + dy[k])){
                    out2 = true;
                } else {
                    if(!wall[c2x + dx[k]][c2y + dy[k]]){
                        c2x += dx[k];
                        c2y += dy[k];
                    }
                }

                if(out1 && out2) continue;
                if(out1 || out2) {
                    answer = Math.min(answer, cnt + 1);
                    continue;
                }

                if(c1x == c2x && c1y == c2y) continue;

                c1 = c1x * M + c1y;
                c2 = c2x * M + c2y;

                if(!visisted.containsKey(c1 * N * M + c2)){
                    visisted.put(c1 * N * M + c2, cnt + 1);
                    queue.add(new int[]{c1, c2, cnt + 1});
                    continue;
                }

                if(visisted.get(c1 * N * M + c2) <= cnt + 1) continue;

                visisted.put(c1 * N * M + c2, cnt + 1);
                queue.add(new int[]{c1, c2, cnt + 1});
            }
        }
        System.out.println(answer == Integer.MAX_VALUE ? -1 : answer);

    }
}
