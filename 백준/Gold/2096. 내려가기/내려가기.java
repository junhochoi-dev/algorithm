import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        int[][] arr = new int[N][3];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < 3; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        int[] dy = {-1, 0, 1};
        int[][] dp_min = new int[N][3];
        int[][] dp_max = new int[N][3];
        for(int i = 0; i < 3; i++) dp_min[0][i] = dp_max[0][i] = arr[0][i];
        for(int i = 1; i < N; i++){
            for(int j = 0; j < 3; j++){
                int min = Integer.MAX_VALUE;
                int max = Integer.MIN_VALUE;
                for(int k = 0; k < 3; k++){
                    if(j + dy[k] < 0 || j + dy[k] >= 3) continue;
                    min = Math.min(min, dp_min[i - 1][j + dy[k]]);
                    max = Math.max(max, dp_max[i - 1][j + dy[k]]);
                }
                dp_min[i][j] = arr[i][j] + min;
                dp_max[i][j] = arr[i][j] + max;
            }
        }

        sb.append(Math.max(dp_max[N - 1][0], Math.max(dp_max[N - 1][1], dp_max[N - 1][2]))).append(' ');
        sb.append(Math.min(dp_min[N - 1][0], Math.min(dp_min[N - 1][1], dp_min[N - 1][2])));
        System.out.println(sb);
    }
}

