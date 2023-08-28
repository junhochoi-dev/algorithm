import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, answer;
    static int[][] dist;
    static HashSet<Integer> visited = new HashSet<Integer>();
    static void backTracking(int curr, int start, int distance){
        if(visited.size() == N){
            if(dist[curr][start] == 0) return;
            answer = Math.min(answer, distance + dist[curr][start]);
            return;
        }
        for(int next = 0; next < N; next++){
            if(visited.contains(next)) continue;
            visited.add(next);
            if(curr == -1) backTracking(next, next, distance);
            else {
                if(dist[curr][next] != 0){
                    backTracking(next, start, distance + dist[curr][next]);
                }
            }
            visited.remove(next);
        }
    }
    public static void main(String[] args) throws IOException {
        N = Integer.parseInt(br.readLine());
        dist = new int[N][N];
        answer = Integer.MAX_VALUE;
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < N; j++){
                dist[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        backTracking(-1, -1, 0);
        System.out.println(answer);
    }
}