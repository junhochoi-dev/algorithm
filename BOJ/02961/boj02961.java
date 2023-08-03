import java.io.*;
import java.util.*;

public class Main{
    static int N, minimum = Integer.MAX_VALUE;
    static int sum = 0, mul = 1;
    static int[][] ingredient;
    static void used(int n, int cnt){
        // used
        mul *= ingredient[n][0];
        sum += ingredient[n][1];
        minimum = Math.min(Math.abs(sum - mul), minimum);
        for(int i = n + 1; i < N; i++){
            used(i, cnt + 1);
        }
        // no used
        mul /= ingredient[n][0];
        sum -= ingredient[n][1];
        if(cnt > 0) minimum = Math.min(Math.abs(sum - mul), minimum);
        for(int i = n + 1; i < N; i++){
            used(i, cnt);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        N = Integer.parseInt(br.readLine());
        ingredient = new int[N][2];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            ingredient[i][0] = Integer.parseInt(st.nextToken());
            ingredient[i][1] = Integer.parseInt(st.nextToken());
        }
        used(0, 0);
        System.out.println(minimum);
    }
}