import java.io.*;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");
            st = new StringTokenizer(br.readLine());
            String s1 = st.nextToken();
            String s2 = st.nextToken();

            int[][] dp = new int[s1.length() + 1][s2.length() + 1];
            for(int i = 1; i <= s1.length(); i++){
                for(int j = 1; j <= s2.length(); j++){
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                    if(s1.charAt(i - 1) != s2.charAt(j - 1)) continue;
                    dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - 1] + 1);
                }
            }
            sb.append(dp[s1.length()][s2.length()]).append('\n');
        }
        System.out.println(sb);
    }
}

