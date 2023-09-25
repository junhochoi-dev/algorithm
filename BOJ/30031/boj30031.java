import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        int answer = 0;
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int w = Integer.parseInt(st.nextToken());
            int h = Integer.parseInt(st.nextToken());
            if(w == 136) answer += 1000;
            if(w == 142) answer += 5000;
            if(w == 148) answer += 10000;
            if(w == 154) answer += 50000;
        }
        System.out.println(answer);
    }
}