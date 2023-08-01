import java.io.*;
import java.util.*;
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int[][] arr = new int[N][N];
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                for(int j = 0; j < N; j++){
                    arr[i][j] = Integer.parseInt(st.nextToken());
                }
            }
            int maximum = Integer.MIN_VALUE;
            for(int i = 0; i < N - M + 1; i++){
                for(int j = 0; j < N - M + 1; j++){
                    int sum = 0;
                    for(int n = 0; n < M; n++){
                        for(int m = 0; m < M; m++){
                            sum += arr[i + n][j + m];
                        }
                    }
                    maximum = Math.max(maximum, sum);
                }
            }
            System.out.printf("#%d %d\n", t, maximum);
        }
    }
}