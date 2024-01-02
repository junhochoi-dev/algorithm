import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int[] alphabet = new int[26];
        int N = Integer.parseInt(br.readLine());
        String str = br.readLine();
        for(int i = 0; i < str.length(); i++){
            if ('a' > str.charAt(i) || 'z' < str.charAt(i)) continue;
            alphabet[(int)str.charAt(i) - (int)'a']++;
        }
        int answer = 0;
        for(int i = 0; i < 26; i++) answer = Math.max(answer, alphabet[i]);
        System.out.println(answer);
    }
}
