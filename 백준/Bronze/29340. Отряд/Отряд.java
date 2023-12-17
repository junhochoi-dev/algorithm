import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        String a = br.readLine();
        String b = br.readLine();

        for(int i = 0; i < a.length(); i++){
            sb.append((int)a.charAt(i) > (int)b.charAt(i) ? a.charAt(i) : b.charAt(i));
        }
        System.out.println(sb);
    }
}
