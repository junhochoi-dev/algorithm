import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int h = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int s = Integer.parseInt(st.nextToken());
        int sum = h * 60 * 60 + m * 60 + s + 1;
        h = sum / 60 / 60 % 24;
        m = sum % 3600 / 60;
        s = sum % 60;
        System.out.print(h / 10 == 0 ? "0" + h : h);
        System.out.print(":");
        System.out.print(m / 10 == 0 ? "0" + m : m);
        System.out.print(":");
        System.out.print(s / 10 == 0 ? "0" + s : s);
    }
}