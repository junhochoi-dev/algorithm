import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        int[] semiconductor = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) semiconductor[i] = Integer.parseInt(st.nextToken());
        int[] dp = new int[N];
        Arrays.fill(dp, 1);
        for(int i = 0; i < N; i++){
            for(int j = i - 1; j >= 0; j--){
                if(semiconductor[i] > semiconductor[j]) dp[i] = Math.max(dp[i], dp[j] + 1);
            }
        }
        System.out.println(Arrays.stream(dp).max().getAsInt());
    }
}