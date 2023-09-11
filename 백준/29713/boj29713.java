import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        String sticker = br.readLine();
        int answer = Integer.MAX_VALUE;
        int[] alphabet = new int[26];
        for(int i = 0; i < N; i++){
            alphabet[sticker.charAt(i) - 'A']++;
        }
        for(int i = 0; i < 26; i++){
            String tmp = String.valueOf((char)(i + 'A'));
            if("ER".contains(tmp)) answer = Math.min(answer, alphabet[i] / 2);
            else if ("BRONZESILVER".contains(tmp)) answer = Math.min(answer, alphabet[i]);
        }
        System.out.println(answer);
    }
}