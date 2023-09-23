import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int answer = 0;
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            String str = br.readLine();
            boolean able = false;
            for (int i = 1; i < str.length(); i++){
                if(str.charAt(i) == '1' && str.charAt(i - 1) == '0') able = true;
                if(str.charAt(i) == 'I' && str.charAt(i - 1) == 'O') able = true;
            }
            if(able) answer++;
        }
        System.out.println(answer);
    }
}