import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        String str = br.readLine();
        int[] alphabet = new int[26];
        for(int i = 0 ; i < N; i++){
            alphabet[(int)str.charAt(i) - (int)'a']++;
        }
        int answer = Math.min(
                Math.min(alphabet[(int)'u' - (int)'a'], alphabet[(int)'o' - (int)'a']),
                Math.min(alphabet[(int)'s' - (int)'a'], Math.min(alphabet[(int)'p' - (int)'a'], alphabet[(int)'c' - (int)'a'])));
        System.out.println(answer);
    }
}
