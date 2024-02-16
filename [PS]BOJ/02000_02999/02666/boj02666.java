import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N, M, answer = Integer.MAX_VALUE;
    static int[] sequence;
    static void bruteforce(int l, int r, int idx, int cnt){
        if(idx == M){
            answer = Math.min(answer, cnt);
            return;
        }
        int curr = sequence[idx];
        // L
        if(curr < r) bruteforce(curr, r, idx + 1,  cnt + Math.abs(curr - l));
        // R
        if(l < curr) bruteforce(l, curr, idx + 1, cnt + Math.abs(curr - r));
    }
    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        int L = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());

        M = Integer.parseInt(br.readLine());
        sequence = new int[M];
        for(int i = 0; i < M; i++) sequence[i] = Integer.parseInt(br.readLine());

        bruteforce(L, R, 0, 0);

        System.out.println(answer);
    }
}
