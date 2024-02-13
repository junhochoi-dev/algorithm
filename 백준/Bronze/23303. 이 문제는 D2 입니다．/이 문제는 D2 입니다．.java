import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        String str = br.readLine();
        boolean answer = false;
        for(int i = 0; i < str.length() - 1; i++){
            if(str.charAt(i) == 'D' || str.charAt(i) == 'd'){
                if(str.charAt(i + 1) == '2'){
                    answer = true;
                    break;
                }
            }
        }
        System.out.println(answer ? "D2" : "unrated");
    }
}