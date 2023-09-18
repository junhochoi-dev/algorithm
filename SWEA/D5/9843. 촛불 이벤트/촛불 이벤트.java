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
            long N = Long.parseLong(br.readLine());
            long answer = -1;
            long low = 1;
            long high = 2_000_000_000L;
            while(low <= high){
                long mid = (low + high) / 2;
                long triangle = mid * (mid + 1) / 2;
                if(triangle < N){
                    low = mid + 1;
                } else if(triangle > N) {
                    high = mid - 1;
                } else {
                    answer = mid;
                    break;
                }
            }
            sb.append(answer).append('\n');
        }
        System.out.print(sb);
    }
}