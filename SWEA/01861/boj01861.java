import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    static int N, maximum, tmp_length, std;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static int[][] arr = new int[1000][1000];
    static boolean[][] visited = new boolean[1000][1000];

    static void DFS(int x, int y){
        tmp_length++;
        for(int k = 0; k < 4; k++){
            int tx = x + dx[k];
            int ty = y + dy[k];
            if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
            if(visited[tx][ty]) continue;
            if(Math.abs(arr[x][y] - arr[tx][ty]) != 1) continue;
            visited[tx][ty] = true;
            DFS(tx, ty);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            maximum = Integer.MIN_VALUE;
            N = Integer.parseInt(br.readLine());
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                for(int j = 0; j < N; j++){
                    arr[i][j] = Integer.parseInt(st.nextToken());
                    visited[i][j] = false;
                }
            }
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    boolean exit = false;
                    for(int k = 0; k < 4; k++){
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if(x < 0 || y < 0 || x >= N || y >= N) continue;
                        if(arr[i][j] - 1 == arr[x][y]) {
                            exit = true;
                            break;
                        }
                    }
                    if(exit) continue;
                    tmp_length = 0;
                    visited[i][j] = true;
                    DFS(i, j);
                    if(tmp_length > maximum){
                        maximum = tmp_length;
                        std = arr[i][j];
                    }
                    else if(tmp_length == maximum){
                        std = Math.min(std, arr[i][j]);
                    }
                }
            }
            sb.append("#").append(t).append(" ").append(std).append(" ").append(maximum).append('\n');
        }
        System.out.println(sb);
    }
}