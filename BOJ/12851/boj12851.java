import java.io.*;
import java.util.*;

public class Main {
    static int size = 100_000;
    static int[] loc, met;
    public static void bfs(int start){
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        loc[start] = 0;
        met[start] = 1;
        while(!queue.isEmpty()){
            int curr = queue.poll();

            if(curr * 2 <= size && loc[curr] + 1 <= loc[curr * 2]) {
                if(loc[curr] + 1 < loc[curr * 2]){
                    loc[curr * 2] = loc[curr] + 1;
                    met[curr * 2] = met[curr];
                    queue.add(curr * 2);
                }
                else if(loc[curr] == loc[curr * 2]){
                    met[curr * 2] += met[curr];
                }
            }
            if(curr + 1 <= size && loc[curr] + 1 <= loc[curr + 1]) {
                if(loc[curr] + 1 < loc[curr + 1]){
                    loc[curr + 1] = loc[curr] + 1;
                    met[curr + 1] = met[curr];
                    queue.add(curr + 1);
                }
                else if(loc[curr] + 1 == loc[curr + 1]){
                    met[curr + 1] += met[curr];
                }
            }
            if(curr - 1 >= 0 && loc[curr] + 1 <= loc[curr - 1]) {
                if(loc[curr] + 1 < loc[curr - 1]){
                    loc[curr - 1] = loc[curr] + 1;
                    met[curr - 1] = met[curr];
                    queue.add(curr - 1);
                }
                else if(loc[curr] + 1 == loc[curr - 1]){
                    met[curr - 1] += met[curr];
                }
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        loc = new int[size + 1];
        met = new int[size + 1];
        for(int i = 0; i <= size; i++) loc[i] = Integer.MAX_VALUE;
        bfs(N);
        System.out.println(loc[K]);
        System.out.println(met[K]);
//        System.out.println(Arrays.toString(loc));
//        System.out.println(Arrays.toString(met));
    }
}
