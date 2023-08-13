import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        int[] dp = new int[T + 1];
        dp[0] = 1;
        int K = Integer.parseInt(br.readLine());
        for(int coin = 0; coin < K; coin++){
            st = new StringTokenizer(br.readLine());
            int coin_price = Integer.parseInt(st.nextToken());
            int coin_cnt = Integer.parseInt(st.nextToken());
            for(int price = T; price > 0; price--){
                for(int i = 1; i <= coin_cnt; i++){
                    if(price - coin_price * i >= 0)
                        dp[price] += dp[price - coin_price * i];
                }
            }
        }
        System.out.println(dp[T]);
    }
}
