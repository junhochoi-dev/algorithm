import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int K, W, H;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static int[] ddx = {2, 2, 1, 1, -1, -1, -2, -2};
    static int[] ddy = {1, -1, 2, -2, 2, -2, 1, -1};
    static int[][] arr;
    static int[][][] cnt;
    public static void main(String[] args) throws IOException {
        K = Integer.parseInt(br.readLine());

        st = new StringTokenizer(br.readLine());
        W = Integer.parseInt(st.nextToken());
        H = Integer.parseInt(st.nextToken());

        arr = new int[H][W];
        cnt = new int[H][W][K + 1]; // 0 count // 1 used

        for(int i = 0; i < H; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < W; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
                Arrays.fill(cnt[i][j], Integer.MAX_VALUE);
            }
        }

        Queue<int[]> queue = new ArrayDeque<int[]>();

        queue.add(new int[]{0, 0});
        cnt[0][0][0] = 0;

        while(!queue.isEmpty()){
            int[] curr = queue.poll();
            int x = curr[0] / W;
            int y = curr[0] % W;
            int count = curr[1];

            for(int k = 0; k < 4; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];

                if(tx < 0 || ty < 0 || tx >= H || ty >= W) continue;
                if(arr[tx][ty] == 1) continue;
                if(cnt[x][y][count] + 1 >= cnt[tx][ty][count]) continue;

                cnt[tx][ty][count] = cnt[x][y][count] + 1;
                queue.add(new int[]{tx * W + ty, count});
            }
            if(count == K) continue;
            for(int k = 0; k < 8; k++){
                int tx = x + ddx[k];
                int ty = y + ddy[k];

                if(tx < 0 || ty < 0 || tx >= H || ty >= W) continue;
                if(arr[tx][ty] == 1) continue;
                if(cnt[x][y][count] + 1 >= cnt[tx][ty][count + 1]) continue;

                cnt[tx][ty][count + 1] = cnt[x][y][count] + 1;
                queue.add(new int[]{tx * W + ty, count + 1});
            }
        }

        int answer = Integer.MAX_VALUE;
        for(int i = 0; i <= K; i++) answer = Math.min(answer, cnt[H - 1][W - 1][i]);

        System.out.println(answer == Integer.MAX_VALUE ? -1 : answer);

    }
}
