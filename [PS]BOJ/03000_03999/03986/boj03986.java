import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int answer = 0;
        for(int i = 0; i < N; i++){
            String word = br.readLine();
            Stack<Character> st = new Stack<Character>();
            for(int j = 0; j < word.length(); j++){
                if(st.empty()) st.add(word.charAt(j));
                else {
                    if(st.peek() == word.charAt(j)) st.pop();
                    else st.add(word.charAt(j));
                }
            }
            if(st.empty()) answer++;
        }
        System.out.println(answer);
    }
}