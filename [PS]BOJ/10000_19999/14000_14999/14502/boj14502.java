import java.io.*;
import java.util.*;
public class Main {
    static int N, M, virus_cnt = 0;
    static int[] dx = {1, -1, 0, 0}, dy = {0, 0, 1, -1};
    static int[][] arr;
    static Set<Integer> wall = new HashSet<Integer>();
    static Set<Integer> wall_temp = new HashSet<Integer>();
    static Set<Integer> virus = new HashSet<Integer>();
    static Set<Integer> visited = new HashSet<Integer>();

    static void DFS(int x, int y){
        virus_cnt++;
        for(int k = 0; k < 4; k++){
            int tx = x + dx[k];
            int ty = y + dy[k];
            int v = tx * M + ty;
            if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
            if(visited.contains(v)) continue;
            if(wall.contains(v)) continue;
            if(virus.contains(v)) continue;
            if(wall_temp.contains(v)) continue;
            visited.add(v);
            DFS(tx, ty);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        arr = new int[N][M];

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
                if(arr[i][j] == 1) wall.add(i * M + j);
                if(arr[i][j] == 2) virus.add(i * M + j);
            }
        }
        int answer = Integer.MIN_VALUE;
        for(int i = 0; i < N * M; i++){
            if(!wall.contains(i)) wall_temp.add(i);
            for(int j = i + 1; j < N * M; j++){
                if(!wall.contains(j)) wall_temp.add(j);
                for(int k = j + 1; k < N * M; k++){
                    if(!wall.contains(k)) wall_temp.add(k);
                    virus_cnt = 0;
                    visited.clear();
                    for(int v: virus) DFS(v / M, v % M);
                    answer = Math.max(answer, N * M - wall.size() - virus_cnt - 3);
                    wall_temp.remove(k);
                }
                wall_temp.remove(j);
            }
            wall_temp.remove(i);
        }
        System.out.println(answer);
    }
}
