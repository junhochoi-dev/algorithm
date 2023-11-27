import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int w = Integer.parseInt(st.nextToken());
        int h = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int letter = (w / a) * (h / b);
        if(letter == 0) System.out.println(-1);
        else if((n / letter + (n % letter != 0 ? 1 : 0)) == 0) System.out.println(-1);
        else System.out.println(n / letter + (n % letter != 0 ? 1 : 0));
    }
}