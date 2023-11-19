import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int N = Integer.parseInt(br.readLine());
        for(int i = 0; i < N; i++){
            String str = br.readLine();
            for(int j = 0; j < str.length(); j++){
                if(str.charAt(j) == 'S'){
                    sb.append(str).append('\n');
                    break;
                }
            }
        }
        System.out.println(sb);
    }
}