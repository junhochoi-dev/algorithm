import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        double px = Double.parseDouble(st.nextToken());
        double rx = Double.parseDouble(st.nextToken());
        double vx = px / rx;
        if(vx < 0.2) System.out.println("weak");
        else if(0.2 <= vx && vx < 0.4) System.out.println("normal");
        else if(0.4 <= vx && vx < 0.6) System.out.println("strong");
        else System.out.println("very strong");
    }
}
