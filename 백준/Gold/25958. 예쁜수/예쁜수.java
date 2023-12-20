import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static boolean beautifulNum(int num){
        int sum = 0, temp = num;
        while(temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        return num % sum == 0;
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int M = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        ArrayList<Integer> beautifulNumList = new ArrayList<>();
        beautifulNumList.add(0);
        for(int i = 1; i <= M; i++){
            if(beautifulNum(i)){
                beautifulNumList.add(i);
            }
        }


        int[][] dp = new int[beautifulNumList.size()][M + 1];
        for(int i = 1; i < beautifulNumList.size(); i++){
            for(int j = 1; j <= M; j++){
                dp[i][j] = dp[i - 1][j];
                if(j % beautifulNumList.get(i) == 0) dp[i][j]++;
                dp[i][j] %= K;
                for(int k = 1; k * beautifulNumList.get(i) < j; k++){
                    dp[i][j] += dp[i - 1][j - k * beautifulNumList.get(i)];
                    dp[i][j] %= K;
                }
            }
        }
        System.out.println(dp[beautifulNumList.size() - 1][M]);

    }
}