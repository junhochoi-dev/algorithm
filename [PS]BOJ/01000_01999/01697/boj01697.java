import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int[] dist = new int[100_000 + 1];
        for(int i = 0; i <= 100_000; i++) dist[i] = Integer.MAX_VALUE;
        Queue<Integer> queue = new LinkedList<Integer>();
        dist[N] = 0;
        queue.add(N);
        while(!queue.isEmpty()){
            int curr = queue.poll();
            if(curr * 2 <= 100_000 && dist[curr] + 1< dist[curr * 2]){
                dist[curr * 2] = dist[curr] + 1;
                queue.add(curr * 2);
            }
            if(curr - 1 >= 0 && dist[curr] + 1 < dist[curr - 1]){
                dist[curr - 1] = dist[curr] + 1;
                queue.add(curr - 1);
            }
            if(curr + 1 <= 100_000 && dist[curr] + 1 < dist[curr + 1]){
                dist[curr + 1] = dist[curr] + 1;
                queue.add(curr + 1);
            }
        }
        System.out.println(dist[K]);
    }
}
