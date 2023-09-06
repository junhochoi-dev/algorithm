import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};

        String origin = "123456780";
        String destination = "";
        for(int i = 0; i < 3; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < 3; j++){
                destination += st.nextToken().charAt(0);
            }
        }

        HashMap<String, Integer> dist = new HashMap<String, Integer>();
        dist.put(origin, 0);

        Queue<String> queue = new ArrayDeque<String>();
        queue.add(origin);
        while(!queue.isEmpty()){
            String curr_str = queue.poll();
            int curr = -1;
            for(int i = 0; i < 9; i++){
                if(curr_str.charAt(i) == '0'){
                    curr = i;
                    break;
                }
            }
            int x = curr / 3;
            int y = curr % 3;

            for(int k = 0; k < 4; k++){
                int tx = x + dx[k];
                int ty = y + dy[k];
                int next = tx * 3 + ty;
                if(tx < 0 || ty < 0 || tx >= 3 || ty >= 3) continue;
                String next_str = "";
                if(curr < next) next_str = curr_str.substring(0, curr) + curr_str.charAt(next)
                        + curr_str.substring(curr + 1, next) + curr_str.charAt(curr) + curr_str.substring(next + 1);
                if(curr > next) next_str = curr_str.substring(0, next) + curr_str.charAt(curr)
                        + curr_str.substring(next + 1, curr) + curr_str.charAt(next) + curr_str.substring(curr + 1);

                if(dist.containsKey(next_str)) {
                    if(dist.get(next_str) > dist.get(curr_str) + 1){
                        dist.put(next_str, dist.get(curr_str) + 1);
                        queue.add(next_str);
                    }
                }
                else{
                    dist.put(next_str, dist.get(curr_str) + 1);
                    queue.add(next_str);
                }
            }
        }

        System.out.println(dist.containsKey(destination) ? dist.get(destination) : -1);
    }
}