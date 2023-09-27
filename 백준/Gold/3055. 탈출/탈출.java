
import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;


    static int R, C, sx, sy, ex, ey;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static char arr[][];
    static int dist[][];
    static void water(){
        Queue<Integer> queue = new ArrayDeque<Integer>();
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if(arr[i][j] == '*'){
                    for(int k = 0; k < 4; k++){
                        int tx = i + dx[k];
                        int ty = j + dy[k];
                        if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
                        if(arr[tx][ty] != '.') continue;
                        queue.add(tx * C + ty);
                    }
                }
            }
        }
        while(!queue.isEmpty()){
            int curr = queue.poll();
            arr[curr / C][curr % C] = '*';
        }
    }
    
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        R = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());

        arr = new char[R][C];

        for(int i = 0; i < R; i++){
            String temp = br.readLine();
            for(int j = 0 ; j < C; j++){
                arr[i][j] = temp.charAt(j);
                if(arr[i][j] == 'S'){
                    sx = i;
                    sy = j;
                }
                if(arr[i][j] == 'D'){
                    ex = i;
                    ey = j;
                }
            }
        }

        dist = new int[R][C];
        for(int i = 0; i < R; i++) Arrays.fill(dist[i], Integer.MAX_VALUE);
        dist[sx][sy] = 0;

        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(sx * C + sy);
        while(!queue.isEmpty()) {
            water();
            int cnt = queue.size();
            while(true){
                int curr = queue.poll();
                int x = curr / C;
                int y = curr % C;
                for(int k = 0; k < 4; k++){
                    int tx = x + dx[k];
                    int ty = y + dy[k];
                    int next = tx * C + ty;
                    if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
                    if(arr[tx][ty] == 'X') continue;
                    if(arr[tx][ty] == 'S') continue;
                    if(arr[tx][ty] == '*') continue;

                    if(dist[tx][ty] <= dist[x][y] + 1) continue;
                    dist[tx][ty] = dist[x][y] + 1;
                    queue.add(next);
                }
                cnt--;
                if(cnt == 0) break;
            }
        }
        System.out.println(dist[ex][ey] == Integer.MAX_VALUE ? "KAKTUS" : dist[ex][ey]);
    }
}