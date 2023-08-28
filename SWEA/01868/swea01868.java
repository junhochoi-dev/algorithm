import java.io.*;
import java.net.Inet4Address;
import java.util.*;

public class Solution{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N;
    static char[][] arr;

    static HashSet<Integer> visited;

    static int[] dx = {1, 1, 1, -1, -1, -1, 0, 0};
    static int[] dy = {1, 0, -1, 1, 0, -1, 1, -1};
    static int bombCnt(int x, int y){
        int cnt = 0;
        for(int k = 0; k < 8; k++){
            int tx = x + dx[k];
            int ty = y + dy[k];
            if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
            if(arr[tx][ty] == '*') cnt++;
        }
        return cnt;
    }
    static void BFS(int sx, int sy){
        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(sx * N + sy);
        visited.add(sx * N + sy);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            int x = curr / N;
            int y = curr % N;
            for(int k = 0; k < 8; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                int next = tx * N + ty;
                if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                if(arr[tx][ty] != '.') continue;
                if(visited.contains(next)) continue;
                visited.add(next);
                if(bombCnt(tx, ty) != 0) continue;
                queue.add(next);
            }
        }
    }
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");
            N = Integer.parseInt(br.readLine());
            arr = new char[N][N];
            for(int i = 0; i < N; i++){
                String temp = br.readLine();
                for(int j = 0; j < N; j++){
                    arr[i][j] = temp.charAt(j);
                }
            }
            visited = new HashSet<Integer>();
            int click = 0;
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(arr[i][j] != '.') continue;
                    if(visited.contains(i * N + j)) continue;
                    if(bombCnt(i, j) != 0) continue;
                    click++;
                    BFS(i, j);
                }
            }
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(arr[i][j] != '.') continue;
                    if(visited.contains(i * N + j)) continue;
                    visited.add(i * N + j);
                    click++;
                }
            }
            sb.append(click).append('\n');
        }
        System.out.println(sb);
    }
}