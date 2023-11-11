import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        HashMap<Integer, ArrayList<Integer>> edge = new HashMap<Integer, ArrayList<Integer>>();
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            if(!edge.containsKey(s)) edge.put(s, new ArrayList<Integer>());
            edge.get(s).add(e);
        }

        int S = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        HashSet<Integer> fanclub = new HashSet<Integer>();
        for(int i = 0; i < S; i++) fanclub.add(Integer.parseInt(st.nextToken()));


        Queue<Integer> queue = new ArrayDeque<>();
        if(!fanclub.contains(1)) queue.add(1);

        boolean answer = false;
        while(!queue.isEmpty()){
            int curr = queue.poll();

            if(edge.containsKey(curr)){
                for(int next : edge.get(curr)){
                    if(fanclub.contains(next)) continue;
                    queue.add(next);
                }
            } else {
                answer = true;
            }
        }

        System.out.println(answer ? "yes" : "Yes");
    }
}
