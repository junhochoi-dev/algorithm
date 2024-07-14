import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int front = 0, back = 0;
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            if(Integer.parseInt(st.nextToken()) == 0){
                back++;
            } else {
                front++;
            }
        }
        System.out.println(Math.min(front, back));
    }
}