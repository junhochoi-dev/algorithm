import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int i = 0; i < T; i++){
            int N = Integer.parseInt(br.readLine());
            for(int j = 0; j < N / 5; j++) sb.append("++++ ");
            for(int j = 0; j < N % 5; j++) sb.append("|");
            sb.append('\n');
        }
        System.out.println(sb);
    }
}
