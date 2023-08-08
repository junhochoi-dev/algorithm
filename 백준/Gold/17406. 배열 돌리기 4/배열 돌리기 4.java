import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, K, minumum = Integer.MAX_VALUE;
    static boolean[] visited;
    static int[] sequence;
    static int[][] arr, origin, rotatelist;

    static void init(){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                arr[i][j] = origin[i][j];
            }
        }
    }
    static void rotate(int r, int c, int s){
        for(int l = 2 * s, d = 0; l > 0; l -= 2, d++){
            int x = r - s + d;
            int y = c - s + d;
            int temp = arr[x][y];
            for(int i = x; i < x + l; i++){
                arr[i][y] = arr[i + 1][y];
            }
            for(int i = y; i < y + l; i++){
                arr[x + l][i] = arr[x + l][i + 1];
            }
            for(int i = x + l; i > x ; i--){
                arr[i][y + l] = arr[i - 1][y + l];
            }
            for(int i = y + l; i > y; i--){
                arr[x][i] = arr[x][i - 1];
            }
            arr[x][y + 1] = temp;
        }
    }
    static int rowvalue(){
        int minimum = Integer.MAX_VALUE;
        for(int i = 0; i < N; i++){
            int sum = 0;
            for(int j = 0; j < M; j++){
                sum += arr[i][j];
            }
            minimum = Math.min(minimum, sum);
        }
        return minimum;
    }
    static void next_permutation(int idx){
        if(idx == K){
            init();
            for(int i = 0; i < K; i++){
                int curr = sequence[i];
                rotate(rotatelist[curr][0] - 1, rotatelist[curr][1] - 1, rotatelist[curr][2]);
            }
            minumum = Math.min(minumum, rowvalue());
            return;
        }
        for(int i = 0; i < K; i++){
            if(visited[i]) continue;
            sequence[idx] = i;
            visited[i] = true;
            next_permutation(idx + 1);
            visited[i] = false;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        visited = new boolean[K];
        sequence = new int[K];
        origin = new int[N][M];
        arr = new int[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                origin[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        rotatelist = new int[K][3];
        for(int i = 0; i < K; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < 3; j++){
                rotatelist[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        next_permutation(0);
        System.out.println(minumum);
    }
}