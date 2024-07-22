import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        while(true){
            String num = String.valueOf(N);
            int sum = 0;
            for (int i = 0; i < num.length(); i++) {
                sum += (num.charAt(i) - '0');
            }
            if(N % sum == 0) {
                System.out.println(N);
                break;
            }
            N++;
        }
    }
}