import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            int N = Integer.parseInt(br.readLine());
            int[][] arr = new int[N][N];
            int sum = 0;
            for(int i = 0; i < N; i++){
                String input = br.readLine();
                for(int j = 0; j < N; j++){
                    arr[i][j] = input.charAt(j) - '0';
                    if(Math.abs(N / 2 - i) + Math.abs(N / 2 - j) <= N / 2) sum += arr[i][j];
                }
            }
            System.out.printf("#%d %d\n", t + 1, sum);
        }
    }
}
