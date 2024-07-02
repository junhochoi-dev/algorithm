import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int s = Integer.parseInt(st.nextToken());
        int e = Integer.parseInt(st.nextToken());
        char c = st.nextToken().charAt(0);
        int answer = 0;
        for (int i = s; i <= e; i++) {
            String num = String.valueOf(i);
            for (int j = 0; j < num.length(); j++) {
                if(num.charAt(j) == c){
                    answer++;
                }
            }
        }
        System.out.println(answer);
    }
}