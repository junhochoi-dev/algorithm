import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int answer = 0;
    static void backtracking(String next){
        if(next.length() == 1) {
            answer++;
            return;
        }
        String left = next.substring(1, next.length());
        String right = next.substring(0, next.length() - 1);
        backtracking(left);
        if(left.equals(right)) return;
        backtracking(right);
    }
    public static void main(String[] args) throws Exception {
        String str = br.readLine();
        backtracking(str);
        System.out.println(answer);
    }
}