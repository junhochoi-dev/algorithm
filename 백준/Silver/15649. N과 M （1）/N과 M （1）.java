import java.io.*;
import java.util.*;

public class Main {
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] seq;
    static boolean[] visited = new boolean[8 + 1];
    static void backtracking(int curr, int cnt){
        if(cnt == M){
            for(int i = 1; i <= M; i++){
                sb.append(seq[i]).append(" ");
            }
            sb.append("\n");
            return;
        }
        for(int i = 1; i <= N; i++){
            if(curr == i) continue;
            if(visited[i]) continue;
            visited[i] = true;
            seq[cnt + 1] = i;
            backtracking(i, cnt + 1);
            visited[i] = false;
        }
    }

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        seq = new int[N + 1];
        M = Integer.parseInt(st.nextToken());
        for(int i = 1; i <= N; i++){
            visited[i] = true;
            seq[1] = i;
            backtracking(i, 1);
            visited[i] = false;
        }
        System.out.println(sb);
    }
}

