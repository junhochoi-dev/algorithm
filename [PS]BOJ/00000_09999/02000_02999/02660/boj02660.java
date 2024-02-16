import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int INF = 987564321;
    public static void main(String[] args) throws IOException {

        int N = Integer.parseInt(br.readLine());
        int dist[][] = new int[N + 1][N + 1];
        for(int i = 0; i <= N; i++) Arrays.fill(dist[i], INF);

        while(true){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            if(a == -1 && b == -1) break;
            dist[a][b] = dist[b][a] = 1;
            dist[a][a] = dist[b][b] = 0;
        }

        for(int k = 1; k <= N; k++){
            for (int i = 1; i <= N ; i++) {
                for (int j = 1; j <= N; j++) {
                    dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        int score[] = new int[N + 1];
        int std = INF;
        for (int i = 1; i <= N ; i++) {
            for (int j = 1; j <= N; j++) {
                if(dist[i][j] != INF) score[i] = Math.max(score[i], dist[i][j]);
            }
            std = Math.min(std, score[i]);
        }

//        for (int i = 1; i <= N; i++) {
//            for(int j = 1; j <= N; j++){
//
//                System.out.print(dist[i][j] + " ");
//            }
//            System.out.println();
//        }
//        System.out.println();

        ArrayList<Integer> answer = new ArrayList<Integer>();
        for (int i = 1; i <= N; i++) {
            if(score[i] == std) answer.add(i);
        }

        sb.append(std).append(" ").append(answer.size()).append('\n');
        for(int i = 0; i < answer.size(); i++) sb.append(answer.get(i)).append(" ");
        System.out.println(sb);
    }
}