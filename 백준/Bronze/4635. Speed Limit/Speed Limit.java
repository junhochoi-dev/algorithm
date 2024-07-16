import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        while(true){
            int N = Integer.parseInt(br.readLine());
            if(N == -1) break;
            int sum = 0, prev = 0;
            for (int i = 0; i < N; i++) {
                st = new StringTokenizer(br.readLine());
                int s = Integer.parseInt(st.nextToken());
                int t = Integer.parseInt(st.nextToken());
                sum += s * Math.abs(prev - t);
                prev = t;
            }
            System.out.println(sum + " miles");
        }
    }
}