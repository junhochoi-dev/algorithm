import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class STUDENT implements Comparable<STUDENT> {
        int INDEX;
        int DANGER;

        public STUDENT(int INDEX, int DANGER) {
            this.INDEX = INDEX;
            this.DANGER = DANGER;
        }

        @Override
        public int compareTo(STUDENT o) {
            if (this.DANGER == o.DANGER) {
                return Integer.compare(this.INDEX, o.INDEX);
            }
            return Integer.compare(this.DANGER, o.DANGER);
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[][] dp = new int[50 + 1][50 + 1];
        for(int i = 0; i <= 50; i++){
            for(int j = 0; j <= 50; j++){
                dp[i][j] = -1;
            }
        }
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int RED = Integer.parseInt(st.nextToken());
            int BLUE = Integer.parseInt(st.nextToken());
            int DANGER = Integer.parseInt(st.nextToken());
            for (int n = 50; n >= 0; n--) {
                for (int m = 50; m >= 0; m--) {
                    if (RED > n || BLUE > m) continue;
                    if (dp[n - RED][m - BLUE] == -1) continue;

                    dp[n][m] = Math.max(dp[n][m], dp[n - RED][m - BLUE] + DANGER);
                }
            }
            dp[RED][BLUE] = Math.max(dp[RED][BLUE], DANGER);
        }

        STUDENT[] answer = new STUDENT[N];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int RED = Integer.parseInt(st.nextToken());
            int BLUE = Integer.parseInt(st.nextToken());
            answer[i] = new STUDENT(i + 1, Math.max(dp[RED][BLUE], 0));
        }
        Arrays.sort(answer);
        for (int i = 0; i < N; i++) {
            sb.append(answer[i].INDEX).append(" ").append(answer[i].DANGER).append('\n');
        }
        System.out.print(sb);
    }
}