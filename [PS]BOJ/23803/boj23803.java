import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < 4 * N; i++){
            for(int j = 0; j < N; j++){
                sb.append('@');
            }
            sb.append('\n');
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < 5 * N; j++){
                sb.append('@');
            }
            sb.append('\n');
        }
        System.out.println(sb);
    }
}
