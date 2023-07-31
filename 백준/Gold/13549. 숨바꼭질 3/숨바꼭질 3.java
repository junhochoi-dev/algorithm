import java.io.*;
import java.util.*;

public class Main {
    static int[] loc;
    public static void bfs(int start){
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        loc[start] = 0;
        while(!queue.isEmpty()){
            int curr = queue.poll();

            if(curr * 2 <= 100_000 && loc[curr] < loc[curr * 2]) {
                loc[curr * 2] = loc[curr];
                queue.add(curr * 2);
            }
            if(curr + 1 <= 100_000 && loc[curr] + 1 < loc[curr + 1]) {
                loc[curr + 1] = loc[curr] + 1;
                queue.add(curr + 1);
            }
            if(curr - 1 >= 0 && loc[curr] + 1 < loc[curr - 1]) {
                loc[curr - 1] = loc[curr] + 1;
                queue.add(curr - 1);
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        loc = new int[100_000 + 1];
        for(int i = 0; i <= 100_000; i++) loc[i] = Integer.MAX_VALUE;
        bfs(N);
        System.out.println(loc[K]);
    }
}
