import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        while(true){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            if(a == 0 && b == 0) break;
            // a 중앙값
            int ma = 2 * a - b;
            // b 중앙값
            int mb = 2 * b - a;
            // c 중앙값
            int mc = (a + b) / 2;
            System.out.println(Math.min(ma, Math.min(mb, mc)));
        }
    }
}
