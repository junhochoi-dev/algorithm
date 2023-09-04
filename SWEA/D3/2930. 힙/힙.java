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
            PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
            int N = Integer.parseInt(br.readLine());
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                int op = Integer.parseInt(st.nextToken());
                if(op == 1){
                    int value = Integer.parseInt(st.nextToken());
                    pq.add(-value);
                }
                else {
                    if(pq.isEmpty()) sb.append(-1).append(" ");
                    else sb.append(-pq.poll()).append(" ");
                }
            }
            sb.append("\n");
        }
        System.out.println(sb);
    }
}