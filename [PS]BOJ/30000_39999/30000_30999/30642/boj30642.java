import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        String mascot = br.readLine();
        int K = Integer.parseInt(br.readLine());
        if(mascot.equals("induck")){
            if(K % 2 == 0) System.out.println(K);
            else {
                if(K == 1) System.out.println(K + 1);
                else System.out.println(K - 1);
            }
        } else {
            if(K % 2 != 0) System.out.println(K);
            else System.out.println(K - 1);
        }
    }
}
