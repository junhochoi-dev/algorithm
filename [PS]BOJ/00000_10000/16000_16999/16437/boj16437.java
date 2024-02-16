import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static long[] count;
    static HashMap<Integer, ArrayList<Integer>> edge = new HashMap<Integer, ArrayList<Integer>>();
    static long rescueSheep(int curr){
        if(edge.containsKey(curr)){
            long sum = 0;
            for(int next : edge.get(curr)){
                sum += rescueSheep(next);
            }
            return Math.max(0, sum + count[curr]);
        } else {
            return count[curr] = Math.max(0, count[curr]);
        }
    }
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        count = new long[N + 1];

        for(int i = 2; i <= N; i++){
            st = new StringTokenizer(br.readLine());
            String type = st.nextToken();
            if(type.equals("S")) count[i] = Integer.parseInt(st.nextToken());
            else count[i] = -Integer.parseInt(st.nextToken());

            int root = Integer.parseInt(st.nextToken());
            if(!edge.containsKey(root)) edge.put(root, new ArrayList<Integer>());
            edge.get(root).add(i);
        }

        System.out.println(rescueSheep(1));
    }
}
