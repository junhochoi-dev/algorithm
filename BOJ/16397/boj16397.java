import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int buttonB(int num){
        num *= 2;
        int MOD = 10_000;
        for(int i = 0; i < 5; i++){
            if(num / MOD != 0){
                num -= MOD;
                break;
            }
            MOD /= 10;
        }
        return num;
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int T = Integer.parseInt(st.nextToken());
        int G = Integer.parseInt(st.nextToken());
        int[] dp = new int[100_000];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[N] = 0;
        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(N);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            if(curr + 1 < 100_000){
                if(dp[curr + 1] > dp[curr] + 1){
                    dp[curr + 1] = dp[curr] + 1;
                    queue.add(curr + 1);
                }
            }
            int next = buttonB(curr);
            if(next < 100_000 && curr * 2 < 100_000){
                if(dp[next] > dp[curr] + 1){
                    dp[next] = dp[curr] + 1;
                    queue.add(next);
                }
            }
        }
        System.out.println(dp[G] > T ? "ANG" : dp[G]);
    }
}
