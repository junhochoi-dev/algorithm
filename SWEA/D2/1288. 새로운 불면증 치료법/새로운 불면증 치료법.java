import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            int N = Integer.parseInt(br.readLine());
            int ans = 0, idx = 0, cnt = 0;
            while((1 << 10) - 1 != ans){
                int tmp = N * ++idx;
                cnt += tmp;
                while(tmp != 0){
                    ans |= 1 << (tmp % 10);
                    tmp /= 10;
                }
            }
            sb.append("#").append(t).append(" ").append(idx * N).append('\n');
        }
        System.out.println(sb);
    }
}