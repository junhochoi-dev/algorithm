import java.io.*;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        final int MOD = 20171109;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");
            PriorityQueue<Integer> maxheap = new PriorityQueue<Integer>();
            PriorityQueue<Integer> minheap = new PriorityQueue<Integer>();
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int A = Integer.parseInt(st.nextToken());
            int sum = 0;
            maxheap.add(-A);
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                if(-maxheap.peek() < a) minheap.add(a);
                else maxheap.add(-a);
                if(-maxheap.peek() < b) minheap.add(b);
                else maxheap.add(-b);
                if(maxheap.size() - 1 < minheap.size()){
                    while(maxheap.size() - 1 != minheap.size()){
                        maxheap.add(-minheap.poll());
                    }
                }
                if(maxheap.size() - 1 > minheap.size()){
                    while(maxheap.size() - 1 != minheap.size()){
                        minheap.add(-maxheap.poll());
                    }
                }
                sum += -maxheap.peek();
                sum %= MOD;
            }
            sb.append(sum).append('\n');
        }
        System.out.println(sb);
    }
}