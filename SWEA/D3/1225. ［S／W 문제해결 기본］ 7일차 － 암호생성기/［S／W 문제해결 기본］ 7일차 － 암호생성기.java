import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        for(int t = 1; t <= 10; t++){
            int N = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());
            Queue<Integer> queue = new LinkedList<Integer>();
            for(int i = 0; i < 8; i++){
                queue.add(Integer.parseInt(st.nextToken()));
            }
            int idx = 1;
            while(true){
                int front = queue.poll();
                queue.add(Math.max(front - idx, 0));
                if(front - idx <= 0) break;
                idx++;
                if(idx == 6) idx = 1;
            }
            sb.append("#").append(N).append(" ");
            for(int i = 0; i < 8; i++) sb.append(queue.poll()).append(" ");
            sb.append('\n');
        }
        System.out.println(sb);
    }
}