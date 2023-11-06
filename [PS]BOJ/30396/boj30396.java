import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int convert(String str){
        int v = 0;
        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i) == '1'){
                v += 1 << i;
            }
        }
        return v;
    }

    public static void main(String[] args) throws IOException {
        int[] dx = {1, 1, 2, 2, -1, -1, -2, -2};
        int[] dy = {-2, 2, -1, 1, -2, 2, -1, 1};

        int[] dist = new int[1 << 16];
        Arrays.fill(dist, Integer.MAX_VALUE);

        StringBuilder start = new StringBuilder();
        for(int i = 0; i < 4; i++) start.append(br.readLine());
        int s = convert(start.toString());
        StringBuilder end = new StringBuilder();
        for(int i = 0; i < 4; i++) end.append(br.readLine());
        int e = convert(end.toString());

        Queue<Integer> queue = new ArrayDeque<Integer>();
        queue.add(s);
        dist[s] = 0;
        while(!queue.isEmpty()){
            int curr = queue.poll();
            for(int i = 0; i < 16; i++){
                int loc_curr = 1 << i;
                if((loc_curr & curr) == 0) continue;

                int x = i / 4;
                int y = i % 4;
                for(int k = 0; k < 8; k++){
                    int tx = x + dx[k];
                    int ty = y + dy[k];
                    if(tx < 0 || ty < 0 || tx >= 4 || ty >= 4) continue;

                    int loc_next = 1 << (4 * tx + ty);
                    if((curr & loc_next) != 0) continue;

                    int next = curr - loc_curr + loc_next;
                    if(dist[next] <= dist[curr] + 1) continue;
                    dist[next] = dist[curr] + 1;
                    queue.add(next);
                }
            }
        }
        System.out.println(dist[e]);
    }
}