import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        int[][] arr = new int[N][M];
        int[][][] dp = new int[N][M][3]; // 0 ↙ . 1 ↓ . 2 ↘
        int[] dy = new int[]{1, 0, -1};
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                arr[i][j] = scanner.nextInt();
                for(int k = 0; k < 3; k++){
                    dp[i][j][k] = Integer.MAX_VALUE;
                    if(i == 0) dp[i][j][k] = arr[i][j];
                }
            }
        }
        for(int i = 1; i < N; i++){
            for(int j = 0; j < M; j++){
                for(int k = 0; k < 3; k++){ // 뒷 공간
                    int x = i - 1;
                    int y = j + dy[k];
                    if(y < 0 || y >= M) continue;
                    int minimum = Integer.MAX_VALUE;
                    for(int t = 0; t < 3; t++){ // 뒷 공간이 받은 방향
                        if(t == k) continue;
                        minimum = Math.min(minimum, dp[x][y][t]);
                    }
                    dp[i][j][k] = minimum + arr[i][j];
                }
            }
        }
        int answer = Integer.MAX_VALUE;
        for(int j = 0; j < M; j++){
            for(int k = 0; k < 3; k++){
                answer = Math.min(answer, dp[N - 1][j][k]);
            }
        }

        System.out.println(answer);

        scanner.close();
    }
}