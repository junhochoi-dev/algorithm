import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int t1 = Integer.parseInt(st.nextToken());
        int v1 = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int t2 = Integer.parseInt(st.nextToken());
        int v2 = Integer.parseInt(st.nextToken());

        if(t2 < 0 && v2 >= 10) System.out.println("A storm warning for tomorrow! Be careful and stay home if possible!");
        else if(t1 > t2) System.out.println("MCHS warns! Low temperature is expected tomorrow.");
        else if(v1 < v2) System.out.println("MCHS warns! Strong wind is expected tomorrow.");
        else System.out.println("No message");
    }
}