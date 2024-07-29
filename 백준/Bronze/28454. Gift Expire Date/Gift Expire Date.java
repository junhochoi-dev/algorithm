import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine(), "-");
        int cy = Integer.parseInt(st.nextToken());
        int cm = Integer.parseInt(st.nextToken());
        int cd = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(br.readLine());
        int answer = 0;
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine(), "-");
            int y = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            if(cy < y) answer++;
            else if(cy == y){
                if(cm < m) answer++;
                else if(cm == m){
                    if(cd <= d){
                        answer++;
                    }
                }
            }
        }
        System.out.println(answer);
    }
}