import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        String[] univ = new String[N + 1];
        for (int i = 1; i <= N; i++) {
            univ[i] = br.readLine();
        }
        boolean[] back = new boolean[N + 1];
        int[] next = new int[N + 1];
        int[] last = new int[N + 1];
        for (int i = 1; i <= N; i++) {
            next[i] = i; last[i] = i;
        }
        for (int i = 0; i < N - 1; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            next[last[a]] = b;
            last[a] = last[b];
            back[b] = true;
        }
        int curr = 0;
        for (int i = 1; i <= N; i++) {
            if(!back[i]){
                curr = i;
                break;
            }
        }
        sb.append(univ[curr]);
        while(true){
            curr = next[curr];
            sb.append(univ[curr]);
            if(curr == next[curr]) break;
        }
        System.out.print(sb);
    }
}