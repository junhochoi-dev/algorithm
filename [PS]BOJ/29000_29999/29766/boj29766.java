import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int INF = 987564321;
    public static void main(String[] args) throws IOException {
        String str = br.readLine();
        int answer = 0;
        for(int i = 0; i < str.length() - 3; i++){
            if(str.charAt(i) == 'D' && str.charAt(i + 1) == 'K' && str.charAt(i + 2) == 'S' && str.charAt(i + 3) == 'H'){
                answer++;
            }
        }
        System.out.println(answer);
    }
}