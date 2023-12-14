import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        double h = Double.parseDouble(st.nextToken());
        double l = Double.parseDouble(st.nextToken());
        double a = Double.parseDouble(st.nextToken());
        double b = Double.parseDouble(st.nextToken());

        boolean answer = false;

        if(h >= a / 2 && l >= b) answer = true;
        if(h >= b / 2 && l >= a) answer = true;
        System.out.println(answer ? "YES" : "NO");
    }
}
