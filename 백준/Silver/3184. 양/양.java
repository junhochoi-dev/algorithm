import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int R, C;
    static int sheep = 0, wolf = 0;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static char[][] arr;
    static HashSet<Integer> visited = new HashSet<Integer>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        R = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        arr = new char[R][C];
        for(int i = 0; i < R; i++){
            String temp = br.readLine();
            for(int j = 0; j < C; j++){
                arr[i][j] = temp.charAt(j);
                if(arr[i][j] == 'o') sheep++;
                if(arr[i][j] == 'v') wolf++;
            }
        }
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(arr[i][j] == '#') continue;
                int loc_curr = i * C + j;
                int cnt_sheep = 0;
                int cnt_wolf = 0;
                Queue<Integer> queue = new ArrayDeque<>();
                queue.add(loc_curr);
                visited.add(loc_curr);
                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    int x = curr / C;
                    int y = curr % C;
                    if(arr[x][y] == 'o') cnt_sheep++;
                    if(arr[x][y] == 'v') cnt_wolf++;
                    for(int k = 0; k < 4; k++){
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        int loc_next = tx * C + ty;
                        if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
                        if(visited.contains(loc_next)) continue;
                        if(arr[tx][ty] == '#') continue;
                        visited.add(loc_next);
                        queue.add(loc_next);
                    }
                }
                if(cnt_sheep > cnt_wolf) wolf -= cnt_wolf;
                else sheep -= cnt_sheep;
            }
        }
        System.out.println(sheep + " " + wolf);
    }
}