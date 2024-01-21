import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int answer = 0;
            for(int a = 1; a < n; a++){
                for(int b = a + 1; b < n; b++){
                    if((a * a + b * b + m) % (a * b) == 0){
                        answer++;
                    }
                }
            }
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}