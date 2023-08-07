import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int F = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(st.nextToken());
        int G = Integer.parseInt(st.nextToken());
        int U = Integer.parseInt(st.nextToken());
        int D = Integer.parseInt(st.nextToken());
        int[] floor = new int[F + 1];
        for(int i = 1; i <= F; i++) floor[i] = Integer.MAX_VALUE;

        Queue<Integer> queue = new LinkedList<Integer>();
        queue.add(S);
        floor[S] = 0;
        while(!queue.isEmpty()){
            int curr = queue.poll();
            if(curr + U <= F && floor[curr] + 1 < floor[curr + U]){
                floor[curr + U] = floor[curr] + 1;
                queue.add(curr + U);
            }
            if(curr - D >= 1 && floor[curr] + 1 < floor[curr - D]){
                floor[curr - D] = floor[curr] + 1;
                queue.add(curr - D);
            }
        }
        System.out.println(floor[G] == Integer.MAX_VALUE ? "use the stairs" : floor[G]);
    }
}