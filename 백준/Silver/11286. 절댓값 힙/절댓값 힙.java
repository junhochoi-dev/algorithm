import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        HashMap<Integer, PriorityQueue<Integer>> numlist = new HashMap<Integer, PriorityQueue<Integer>>();
        int T = Integer.parseInt(br.readLine());
        for(int i = 0; i < T; i++){
            int num = Integer.parseInt(br.readLine());
            if(num == 0) {
                if(!pq.isEmpty()){
                    int absnum = pq.poll();
                    if(!numlist.get(absnum).isEmpty()) sb.append(numlist.get(absnum).poll()).append("\n");
                    else sb.append("0\n");
                }
                else sb.append("0\n");
            }
            else{
                pq.add(Math.abs(num));
                if(!numlist.containsKey(Math.abs(num))) numlist.put(Math.abs(num), new PriorityQueue<Integer>());
                numlist.get(Math.abs(num)).add(num);
            }
        }
        System.out.println(sb);
    }
}