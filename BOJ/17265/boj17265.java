import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N, maximum = Integer.MIN_VALUE, minimum = Integer.MAX_VALUE;
    static char[][] arr;
    static int[][] min, max;
    static int[] dx = {1, 0};
    static int[] dy = {0, 1};
    static HashSet<Integer> visited = new HashSet<Integer>();

    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        arr = new char[N][N];
        min = new int[N][N];
        max = new int[N][N];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < N; j++){
                arr[i][j] = st.nextToken().charAt(0);
                min[i][j] = Integer.MAX_VALUE;
                max[i][j] = Integer.MIN_VALUE;
            }
        }
        min[0][0] = max[0][0] = arr[0][0] - '0';
        for(int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (arr[i][j] == '+' || arr[i][j] == '-' || arr[i][j] == '*'){
                    for(int k = 0; k < 2; k++){
                        int px = i - dx[k];
                        int py = j - dy[k];
                        if(px < 0 || py < 0) continue;
                        for(int t = 0; t < 2; t++){
                            int nx = i + dx[t];
                            int ny = j + dy[t];
                            if(nx >= N || ny >= N) continue;
                            if(arr[i][j] == '+'){
                                max[nx][ny] = Math.max(max[nx][ny], max[px][py] + (arr[nx][ny] - '0'));
                                min[nx][ny] = Math.min(min[nx][ny], min[px][py] + (arr[nx][ny] - '0'));
                            }
                            if(arr[i][j] == '-'){
                                max[nx][ny] = Math.max(max[nx][ny], max[px][py] - (arr[nx][ny] - '0'));
                                min[nx][ny] = Math.min(min[nx][ny], min[px][py] - (arr[nx][ny] - '0'));
                            }
                            if(arr[i][j] == '*'){
                                max[nx][ny] = Math.max(max[nx][ny], max[px][py] * (arr[nx][ny] - '0'));
                                min[nx][ny] = Math.min(min[nx][ny], min[px][py] * (arr[nx][ny] - '0'));
                            }
                        }
                    }
                }
            }
        }
        System.out.println(max[N - 1][N - 1] + " " + min[N - 1][N - 1]);
    }
}