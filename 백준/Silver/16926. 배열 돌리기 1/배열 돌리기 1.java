import java.io.*;
import java.util.*;

public class Main {
    static int N, M, R;
    static int[][] arr;
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        R = Integer.parseInt(st.nextToken());

        arr = new int[N][M];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for (int r = 0; r < R; r++) {
            for (int n = N, m = M, d = 0;  d < Math.min(N, M) / 2; n-=2, m-=2, d++) {
                int x = d;
                int y = d;
                int temp = arr[x][y];

                for (int i = y; i < y + m - 1; i++) {
                    arr[x][i] = arr[x][i + 1];
                }
                for (int i = x; i < x + n - 1; i++) {
                    arr[i][y + m - 1] = arr[i + 1][y + m - 1];
                }
                for (int i = y + m - 1; i > y; i--) {
                    arr[x + n - 1][i] = arr[x + n - 1][i - 1];
                }
                for (int i = x + n - 1; i > x; i--) {
                    arr[i][y] = arr[i - 1][y];
                }

                arr[x + 1][y] = temp;
            }
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                sb.append(arr[i][j]).append(" ");
            }
            sb.append("\n");
        }
        
        System.out.println(sb);
    }
}