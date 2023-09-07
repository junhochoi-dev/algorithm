import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        long W = Long.parseLong(st.nextToken());
        long B = Long.parseLong(st.nextToken());
        System.out.println(W + 1 <= B ? W + 1 : B);
    }
}
