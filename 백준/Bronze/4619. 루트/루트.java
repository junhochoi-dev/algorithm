import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        while(true){
            st = new StringTokenizer(br.readLine());
            int B = Integer.parseInt(st.nextToken());
            int N = Integer.parseInt(st.nextToken());
            if(B == 0 && N == 0) break;
            int gap = Integer.MAX_VALUE, anwser = 0, A = 0;
            while(true) {
                if(gap > Math.abs(B - Math.pow(A, N))) {
                    gap = (int) Math.abs(B - Math.pow(A, N));
                    anwser = A;
                }
                if(Math.pow(A, N) > B) break;
                A++;
            }
            System.out.println(anwser);
        }
    }
}
