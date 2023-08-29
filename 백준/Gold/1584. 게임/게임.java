import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int SIZE = 500 + 1;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static int[][] arr = new int[SIZE][SIZE];
    static int[][] life = new int[SIZE][SIZE];
    public static void main(String[] args) throws Exception {
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                life[i][j] = Integer.MAX_VALUE;
            }
        }
        int x1, x2, y1, y2;
        int N = Integer.parseInt(br.readLine());
        for(int t = 0; t < N; t++){
            st = new StringTokenizer(br.readLine());
            x1 = Integer.parseInt(st.nextToken());
            y1 = Integer.parseInt(st.nextToken());
            x2 = Integer.parseInt(st.nextToken());
            y2 = Integer.parseInt(st.nextToken());
            for(int i = Math.min(x1, x2); i <= Math.max(x1, x2); i++){
                for(int j = Math.min(y1, y2); j <= Math.max(y1, y2); j++){
                    arr[i][j] = 1;
                }
            }
        }
        int M = Integer.parseInt(br.readLine());
        for(int t = 0; t < M; t++){
            st = new StringTokenizer(br.readLine());
            x1 = Integer.parseInt(st.nextToken());
            y1 = Integer.parseInt(st.nextToken());
            x2 = Integer.parseInt(st.nextToken());
            y2 = Integer.parseInt(st.nextToken());
            for(int i = Math.min(x1, x2); i <= Math.max(x1, x2); i++){
                for(int j = Math.min(y1, y2); j <= Math.max(y1, y2); j++){
                    arr[i][j] = -1;
                }
            }
        }

        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(0);
        life[0][0] = 0;
        while(!queue.isEmpty()){
            int curr = queue.poll();
            int x = curr / SIZE;
            int y = curr % SIZE;
            for(int k = 0; k < 4; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                int next = tx * SIZE + ty;
                if(tx < 0 || ty < 0 || tx >= SIZE || ty >= SIZE) continue;
                if(arr[tx][ty] == -1) continue;
                if(arr[tx][ty] == 0) {
                    if(life[tx][ty] > life[x][y]){
                        life[tx][ty] = life[x][y];
                        queue.add(next);
                    }
                }
                if(arr[tx][ty] == 1){
                    if(life[tx][ty] > life[x][y] + 1){
                        life[tx][ty] = life[x][y] + 1;
                        queue.add(next);
                    }
                }
            }
        }
        System.out.println(life[SIZE - 1][SIZE - 1] == Integer.MAX_VALUE ? -1 : life[SIZE - 1][SIZE - 1]);
    }
}