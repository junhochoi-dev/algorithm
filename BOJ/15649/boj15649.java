import java.io.*;
import java.util.*;

public class Main {
    static int N, M;
    static boolean[] visited = new boolean[8 + 1];
    static void backtracking(int curr, int cnt, String ans){
        if(cnt == M){
            System.out.println(ans);
            return;
        }
        for(int i = 1; i <= N; i++){
            if(curr == i) continue;
            if(visited[i]) continue;
            visited[i] = true;
            backtracking(i, cnt + 1, ans + i + " ");
            visited[i] = false;
        }
    }

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        for(int i = 1; i <= N; i++){
            visited[i] = true;
            backtracking(i, 1, i + " ");
            visited[i] = false;
        }
    }
}

