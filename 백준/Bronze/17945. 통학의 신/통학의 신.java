import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int answer1 = -A - (int)Math.sqrt(A * A - B);
        int answer2 = -A + (int)Math.sqrt(A * A - B);
        System.out.println(answer1 == answer2 ? answer1 : (answer1 + " " + answer2));
    }
}