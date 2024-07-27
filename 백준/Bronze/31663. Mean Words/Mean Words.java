import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int[] div = new int[45];
        double[] avg = new double[45];
        for (int i = 0; i < N; i++) {
            String word = br.readLine();
            for (int j = 0; j < word.length(); j++) {
                avg[j] += word.charAt(j);
                div[j]++;
            }
        }
        for (int i = 0; i < 45; i++) {
            if(div[i] == 0) break;
            sb.append((char)(avg[i] / div[i]));
        }
        System.out.println(sb);
    }
}