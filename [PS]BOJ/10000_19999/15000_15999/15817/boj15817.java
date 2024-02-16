import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int INF = 987564321;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());
        int knapsack[][] = new int[N][X + 1];

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            int L = Integer.parseInt(st.nextToken());
            int C = Integer.parseInt(st.nextToken());
            for(int j = 1; j * L <= X && j <= C; j++){
                knapsack[i][j * L] = 1;
            }
            if(i == 0) continue;
            for(int j = 0; j <= X; j++){
                knapsack[i][j] += knapsack[i - 1][j];
                for(int k = 1; k <= C; k++){
                    if(j - k * L < 0) break;
                    knapsack[i][j] += knapsack[i - 1][j - k * L];
                }
            }
        }
        System.out.println(knapsack[N - 1][X]);
    }
}