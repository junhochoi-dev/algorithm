import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N + 2; i++) sb.append('@');
        sb.append('\n');
        for (int i = 0; i < N; i++) {
            sb.append('@');
            for (int j = 0; j < N; j++) sb.append(' ');
            sb.append('@');
            sb.append('\n');
        }
        for (int i = 0; i < N + 2; i++) sb.append('@');
        System.out.println(sb);
    }
}
