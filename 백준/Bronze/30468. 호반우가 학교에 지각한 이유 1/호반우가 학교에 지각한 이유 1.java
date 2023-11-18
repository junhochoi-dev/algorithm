import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int s = Integer.parseInt(st.nextToken());
        int d = Integer.parseInt(st.nextToken());
        int i = Integer.parseInt(st.nextToken());
        int l = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        System.out.println(Math.max(4 * N - s - d - i - l, 0));
    }
}
