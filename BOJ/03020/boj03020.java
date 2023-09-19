import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int H = Integer.parseInt(st.nextToken());
        int[] d = new int[H + 1];
        int[] u = new int[H + 1];
        for(int i = 0; i < N; i++) {
            if(i % 2 == 0) d[Integer.parseInt(br.readLine())]++;
            else u[H - Integer.parseInt(br.readLine()) + 1]++;
        }
        for(int i = 2, j = H - 1; i <= H; i++, j--){
            u[i] += u[i - 1];
            d[j] += d[j + 1];
        }
        int answer = Integer.MAX_VALUE;
        int cnt = 0;
        int[] stone = new int[H + 1];
        for(int i = 1; i <= H; i++){
            stone[i] = u[i] + d[i];
            answer = Math.min(answer, stone[i]);
        }
        for(int i = 1; i <= H; i++){
            if(answer == stone[i]) cnt++;
        }
        System.out.println(answer + " " + cnt);
    }
}