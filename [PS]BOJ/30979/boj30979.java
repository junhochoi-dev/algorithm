import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        int N = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        int sum = 0;
        for(int i = 0; i <N; i++) sum += Integer.parseInt(st.nextToken());
        System.out.println(T <= sum ? "Padaeng_i Happy" : "Padaeng_i Cry");
    }
}