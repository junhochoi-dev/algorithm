import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int U = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());
        if(N >= 1000 && (U >= 8000 || L >= 260)) System.out.println("Very Good");
        else if(N >= 1000 && !(U >= 8000 || L >= 260)) System.out.println("Good");
        else System.out.println("Bad");

    }
}