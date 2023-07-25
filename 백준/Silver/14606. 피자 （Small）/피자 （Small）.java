import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] dp = new int[10 + 1];
        dp[0] = dp[1] = 0;
        for(int i = 2; i < 10 + 1; i++){
            for(int j = 1; j <= i; j++){
                dp[i] = Math.max(dp[i], (i - j) * j + dp[i - j] + dp[j]);
            }
        }
        System.out.println(dp[N]);
        scanner.close();
    }
}
