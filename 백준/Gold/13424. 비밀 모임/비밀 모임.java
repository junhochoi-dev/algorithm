import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int[][] distance = new int[N + 1][N + 1];
            for(int i = 0; i <= N; i++){
                for(int j = 0; j <= N; j++){
                    if(i == j) distance[i][j] = 0;
                    else distance[i][j] = 100000;
                }
            }
            for(int i = 0; i < M; i++){
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                int w = Integer.parseInt(st.nextToken());
                distance[a][b] = w;
                distance[b][a] = w;
            }
            for(int k = 1; k <= N; k++){
                for(int i = 1; i <= N; i++){
                    for(int j = 1; j <= N; j++){
                        if(distance[i][k] + distance[k][j] < distance[i][j]) {
                            distance[i][j] = distance[i][k] + distance[k][j];
                        }
                    }
                }
            }
            int[] std_distance = new int[N + 1];
            int K = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());

            int minindex = -1;
            int minimum = 100000;

            for(int i = 0; i < K; i++){
                int std = Integer.parseInt(st.nextToken());
                for(int j = 1; j <= N; j++){
                    std_distance[j] += distance[std][j];
                }
            }
            for(int j = 1; j <= N; j++){
                if(std_distance[j] < minimum && std_distance[j] < 100000){
                    minimum = std_distance[j];
                    minindex = j;
                }
            }
            System.out.println(minindex);
        }
    }
}

