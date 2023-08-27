import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;


    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        char[][] arr = new char[N][M];
        st = new StringTokenizer(br.readLine());
        int x1 = Integer.parseInt(st.nextToken()) - 1;
        int y1 = Integer.parseInt(st.nextToken()) - 1;
        int x2 = Integer.parseInt(st.nextToken()) - 1;
        int y2 = Integer.parseInt(st.nextToken()) - 1;
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            for(int j = 0; j < M; j++){
                arr[i][j] = temp.charAt(j);
            }
        }
        int answer = 0;
        while(true){
            Queue<Integer> queue = new ArrayDeque<Integer>();
            HashSet<Integer> visited = new HashSet<Integer>();
            visited.add(x1 * M + y1);
            queue.add(x1 * M + y1);
            while(!queue.isEmpty()){
                int curr = queue.poll();
                int x = curr / M;
                int y = curr % M;
                if(arr[x][y] == '1' || arr[x][y] == '#'){
                    arr[x][y] = '0';
                    continue;
                }
                for(int k = 0; k < 4; k++){
                    int tx = x + dx[k];
                    int ty = y + dy[k];
                    int next = tx * M + ty;
                    if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                    if(visited.contains(next)) continue;
                    visited.add(next);
                    queue.add(next);
                }
            }
            answer++;
            if(arr[x2][y2] != '#') break;
        }
        System.out.println(answer);
    }
}