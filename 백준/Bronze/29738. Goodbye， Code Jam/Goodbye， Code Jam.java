import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        for(int i = 1; i <= N; i++){
            sb.append("Case #").append(i).append(": ");
            int v = Integer.parseInt(br.readLine());
            if(v <= 25) sb.append("World Finals").append("\n");
            else if(v <= 1000) sb.append("Round ").append(3).append("\n");
            else if(v <= 4500) sb.append("Round ").append(2).append("\n");
            else sb.append("Round ").append(1).append('\n');
        }
        System.out.println(sb);
    }
}