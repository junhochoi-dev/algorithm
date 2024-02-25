import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class CARROT {
        int cost;
        int effect;

        public CARROT(int cost, int effect) {
            this.cost = cost;
            this.effect = effect;
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        ArrayList<CARROT> carrots = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int cost = Integer.parseInt(st.nextToken());
            int effect = Integer.parseInt(st.nextToken());
            carrots.add(new CARROT(cost, effect));
        }

        int answer = 0;
        int[][] dp = new int[K + 1][50 * 100 + 1];
        boolean[][] able = new boolean[K + 1][50 * 100 + 1];
        able[0][1] = true;
        for (int i = 1; i <= K; i++) {
            for (int j = 1; j <= 5000; j++) {

                if(able[i - 1][j]){
                    dp[i][j] = dp[i - 1][j] + j;
                    able[i][j] = true;
                }
                for (int k = 0; k < carrots.size(); k++) {
                    int cost = carrots.get(k).cost;
                    int effect = carrots.get(k).effect;
                    if(j - effect <= 0) continue;
                    if(dp[i - 1][j - effect] - cost < 0) continue;
                    if(able[i - 1][j - effect]){
                        dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - effect] - cost);
                        able[i][j] = true;
                    }
                }
                answer = Math.max(answer, dp[i][j]);
            }
        }
        System.out.println(answer);


//        for (int i = 1; i <= K; i++) {
//            for (int j = 1; j <= 20; j++) {
//                System.out.print(dp[i][j] + "\t");
//            }
//            System.out.println();
//        }
//        System.out.println();
//
//        for (int i = 1; i <= K; i++) {
//            for (int j = 1; j <= 20; j++) {
//                System.out.print(able[i][j] ? "O\t" : "X\t");
//            }
//            System.out.println();
//        }
//        System.out.println();
    }
}