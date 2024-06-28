import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, K, answer = 0;
    static String[] word;
    static boolean[] alphabet;
    // A N T A +  T I C A
    // A C I N T
    static void backtracking(int idx, int wordcnt){
        if(wordcnt == K){
            int cnt = 0;
            for (int i = 0; i < N; i++) {
                boolean able = true;
                for (int j = 0; j < word[i].length(); j++) {
                    if(!alphabet[word[i].charAt(j) - 'a']){
                        able = false;
                        break;
                    }
                }
                if(able) cnt++;
            }
            answer = Math.max(answer, cnt);
            return;
        }
        for (int i = idx; i < 26; i++) {
            if(alphabet[i]) continue;
            alphabet[i] = true;
            backtracking(i, wordcnt + 1);
            alphabet[i] = false;
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        word = new String[N];
        alphabet = new boolean[26];
        for (int i = 0; i < N; i++) {
            word[i] = br.readLine();
            word[i] = word[i].substring(4, word[i].length() - 4);
        }
        if(K < 5) {
            System.out.println(answer);
        } else {
            alphabet['a' - 'a'] = true;
            alphabet['c' - 'a'] = true;
            alphabet['i' - 'a'] = true;
            alphabet['n' - 'a'] = true;
            alphabet['t' - 'a'] = true;
            backtracking(0, 5);
            System.out.println(answer);
        }
    }
}