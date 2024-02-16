import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int[] dist = new int[1000 + 1];
        Arrays.fill(dist, Integer.MAX_VALUE);
        dist[1] = 0;

        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(1);
        while(!queue.isEmpty()){
            int curr = queue.poll();

            for(int mul = 2; mul * curr <= 1000; mul++){
                if(dist[curr * mul] <= dist[curr] + mul) continue;
                dist[curr * mul] = dist[curr] + mul;
                queue.add(curr * mul);
            }

            for(int sub = 1; sub < curr; sub++){
                if(dist[curr - sub] <= dist[curr] + sub) break;
                dist[curr - sub] = dist[curr] + sub;
                queue.add(curr - sub);
            }
        }
        int S = Integer.parseInt(br.readLine());
        System.out.println(dist[S]);
    }
}