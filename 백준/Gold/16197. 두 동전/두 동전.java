import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;


    static int N, M;
    static int dx[] = {1, -1, 0, 0};
    static int dy[] = {0, 0, 1, -1};
    static int answer = Integer.MAX_VALUE;
    static char arr[][];
    static boolean outside(int x, int y){
        return x < 0 || y < 0 || x >= N || y >= M;
    }
    static void backtracking(int c1, int c2, int cnt){
        if(cnt + 1 > 10 || cnt > answer) return;
        for(int k = 0; k < 4; k++){
            int t1 = -1, t2 = -1;
            int x1 = c1 / M + dx[k];
            int y1 = c1 % M + dy[k];
            if(!outside(x1, y1)) t1 = arr[x1][y1] == '#' ? c1 : x1 * M + y1;

            int x2 = c2 / M + dx[k];
            int y2 = c2 % M + dy[k];
            if(!outside(x2, y2)) t2 = arr[x2][y2] == '#' ? c2 : x2 * M + y2;

            if(t1 == -1 && t2 == -1) continue;
            if(t1 == -1 || t2 == -1) {
                answer = Math.min(answer, cnt + 1);
                continue;
            }
            backtracking(t1, t2, cnt + 1);
        }
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        int c1 = -1;
        int c2 = -1;
        arr = new char[N][M];
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            for(int j = 0; j < M; j++){
                arr[i][j] = temp.charAt(j);
                if(arr[i][j] == 'o'){
                   if(c1 == -1) c1 = i * M + j;
                   else c2 = i * M + j;
                }
            }
        }

        backtracking(c1, c2, 0);

        System.out.println(answer == Integer.MAX_VALUE ? -1 : answer);
    }
}