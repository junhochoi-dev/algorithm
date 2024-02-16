import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int convert(int curr){
        ArrayList<Integer> arr = new ArrayList<>();
        for(int i = 0; i < 3; i++){
            arr.add(curr % 100);
            curr /= 100;
        }
        arr.sort(null);
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += (int) (arr.get(i) * Math.pow(100, 2 - i));
        }
        return sum;
    }

    public static void main(String[] args) throws IOException {
        int[][] delta = {{1, 3, 9}, {1, 9, 3}, {3, 1, 9}, {3, 9, 1}, {9, 1, 3}, {9, 3, 1}};
        int N = Integer.parseInt(br.readLine());
        int[] visited = new int[606060 + 1];
        for(int i = 0; i <= 606060; i++) visited[i] = Integer.MAX_VALUE;

        st = new StringTokenizer(br.readLine());
        int start = 0;
        for(int i = 0; i < N; i++){
            start += (int) (Integer.parseInt(st.nextToken()) * Math.pow(100, 2 - i));
        }
        start = convert(start);

        Queue<Integer> queue = new ArrayDeque<>();
        queue.add(start);
        visited[start] = 0;

        while(!queue.isEmpty()){
            int curr = queue.poll();
            for(int k = 0; k < delta.length; k++){
                int next_1 = Math.max(0, curr / 10000 - delta[k][0]);
                int next_2 = Math.max(0, curr % 10000 / 100 - delta[k][1]);
                int next_3 = Math.max(0, curr % 100 - delta[k][2]);
                int next = next_1 * 10000 + next_2 * 100 + next_3;
                next = convert(next);
                if(visited[curr] + 1 >= visited[next]) continue;
                visited[next] = visited[curr] + 1;
                queue.add(next);
            }
        }
        System.out.println(visited[0]);
    }
}