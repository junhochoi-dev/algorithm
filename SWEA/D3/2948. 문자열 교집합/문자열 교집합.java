import java.io.*;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(' ');
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            HashSet<String> stringList = new HashSet<String>();
            st = new StringTokenizer(br.readLine());
            for(int i = 0 ; i < N; i++) stringList.add(st.nextToken());

            st = new StringTokenizer(br.readLine());
            int cnt = 0;
            for(int i = 0; i < M; i++){
                if(stringList.contains(st.nextToken())) {
                    cnt++;
                }
            }
            sb.append(cnt).append('\n');
        }
        System.out.println(sb);
    }
}
