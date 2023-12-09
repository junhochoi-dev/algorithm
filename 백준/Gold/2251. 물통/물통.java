import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int[] temp = new int[3];
        int[] limit = new int[3];
        int[] bottle = new int[3];
        for(int i = 0; i < 3; i++) limit[i] = Integer.parseInt(st.nextToken());

        PriorityQueue<Integer> answer = new PriorityQueue<Integer>();

        HashSet<Integer> visited = new HashSet<Integer>();
        Queue<Integer> queue = new ArrayDeque<Integer>();
        visited.add(limit[2]);
        queue.add(limit[2]);

        while(!queue.isEmpty()){
            int curr = queue.poll();
            bottle[0] = curr / 1_000_000;
            bottle[1] = curr % 1_000_000 / 1_000;
            bottle[2] = curr % 1_000;

            if(bottle[0] == 0) answer.add(bottle[2]);
            // A -> B // B -> A
            // B -> C // C -> B
            // C -> A // A -> C
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){ 
                    if(i == j) continue;
                    if(bottle[i] == 0 || bottle[j] == limit[j]) continue;
                    temp[0] = bottle[0];
                    temp[1] = bottle[1];
                    temp[2] = bottle[2];

                    temp[j] = Math.min(bottle[i] + bottle[j], limit[j]);
                    temp[i] = (bottle[i] + bottle[j]) - temp[j];

                    int next = temp[0] * 1000000 + temp[1] * 1000 + temp[2];
                    if(visited.contains(next)) continue;

                    visited.add(next);
                    queue.add(next);
                }
            }
        }
        while(!answer.isEmpty()) sb.append(answer.poll()).append(" ");
        System.out.println(sb);
    }
}
