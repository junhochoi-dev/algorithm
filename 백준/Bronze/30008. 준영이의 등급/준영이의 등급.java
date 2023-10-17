import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < K; i++){
            int percent = Integer.parseInt(st.nextToken()) * 100 / N;
            if(percent <= 4) sb.append(1).append(" ");
            else if(percent <= 11) sb.append(2).append(" ");
            else if(percent <= 23) sb.append(3).append(" ");
            else if(percent <= 40) sb.append(4).append(" ");
            else if(percent <= 60) sb.append(5).append(" ");
            else if(percent <= 77) sb.append(6).append(" ");
            else if(percent <= 89) sb.append(7).append(" ");
            else if(percent <= 96) sb.append(8).append(" ");
            else sb.append(9).append(" ");
        }
        System.out.println(sb);
    }
}