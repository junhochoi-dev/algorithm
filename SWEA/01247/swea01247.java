import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();

    static int N, hx, hy, ox, oy;
    static int answer;
    static ArrayList<int[]> location;
    static HashSet<Integer> visited = new HashSet<Integer>();
    static void bestRoute(){
        for(int i = 0; i < N; i++){
            visited.add(i);
            int cx = location.get(i)[0];
            int cy = location.get(i)[1];
            search(cx, cy, Math.abs(ox - cx) + Math.abs(oy - cy));
            visited.remove(i);
        }
    }
    static void search(int x, int y, int dist){
        if(visited.size() == N) {
            answer = Math.min(answer, dist + Math.abs(x - hx) + Math.abs(y - hy));
            return;
        }
        for(int i = 0; i < N; i++){
            if(visited.contains(i)) continue;
            visited.add(i);
            int cx = location.get(i)[0];
            int cy = location.get(i)[1];
            search(cx, cy, dist + Math.abs(x - cx) + Math.abs(y - cy));
            visited.remove(i);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            N = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());
            location = new ArrayList<int[]>();
            ox = Integer.parseInt(st.nextToken());
            oy = Integer.parseInt(st.nextToken());

            hx = Integer.parseInt(st.nextToken());
            hy = Integer.parseInt(st.nextToken());

            for(int i = 0 ; i < N; i++){
                int x = Integer.parseInt(st.nextToken());
                int y = Integer.parseInt(st.nextToken());
                location.add(new int[]{x, y});
            }

            answer = Integer.MAX_VALUE;

            bestRoute();

            sb.append("#").append(t).append(" ").append(answer).append('\n');
        }
        System.out.println(sb);
    }
}
