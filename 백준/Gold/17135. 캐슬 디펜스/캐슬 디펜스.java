import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, D, answer = 0;
    static int currcnt = 0, kill;
    static boolean stop;
    static int[] loc = new int[3];
    static int[] dx = {0, -1, 0};
    static int[] dy = {-1, 0, 1};
    static int[][] origin, test;
    static HashSet<Integer> visited, target;
    static void copy(){
        currcnt = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                test[i][j] = origin[i][j];
                if(test[i][j] == 1) currcnt++;
            }
        }
    }
    static void down(){
        currcnt = 0;
        for(int i = N - 1; i >= 1; i--){
            for(int j = 0; j < M; j++){
                test[i][j] = test[i - 1][j];
                if(test[i][j] == 1) currcnt++;
            }
        }
        for(int i = 0; i < M; i++) test[0][i] = 0;
    }
    static void attack(){
        target = new HashSet<Integer>();
        for(int i = 0; i < 3; i++){
            visited = new HashSet<Integer>();
            attackBFS(N * M + loc[i]);
        }
        for(int dead : target){
            test[dead / M][dead % M] = 0;
            kill++;
        }
    }
    static void attackBFS(int start){
        int sx = start / M;
        int sy = start % M;

        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(start);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            int x = curr / M;
            int y = curr % M;

            for(int k = 0; k < 3; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                int t = tx * M + ty;
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(visited.contains(t)) continue;
                if(Math.abs(sx - tx) + Math.abs(sy - ty) > D) continue;
                if(test[tx][ty] == 1){
                    target.add(tx * M + ty);
                    return;
                }
                visited.add(t);
                queue.add(t);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        D = Integer.parseInt(st.nextToken());
        origin = new int[N][M];
        test = new int[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                origin[i][j] = Integer.parseInt(st.nextToken());
                test[i][j] = origin[i][j];
            }
        }
        for(int i = 0; i < M - 2; i++){
            loc[0] = i;
            for(int j = i + 1; j < M - 1; j++){
                loc[1] = j;
                for(int k = j + 1; k < M; k++){
                    loc[2] = k;
                    copy();
                    kill = 0;
                    while(currcnt != 0){
                        attack();
                        down();
                    }
                    answer = Math.max(kill, answer);
                }
            }
        }
        System.out.println(answer);
    }
}