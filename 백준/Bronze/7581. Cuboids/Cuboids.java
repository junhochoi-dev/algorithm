import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        while(true){
            st = new StringTokenizer(br.readLine());
            int l = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            int h = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());
            if(l == 0 && w == 0 && h == 0 && v == 0) break;
            if(l == 0) System.out.println(v / h / w + " " + w + " " + h + " " + v);
            if(w == 0) System.out.println(l + " " + v / h / l + " " + h + " " + v);
            if(h == 0) System.out.println(l + " " + w + " " + v / l / w + " " + v);
            if(v == 0) System.out.println(l + " " + w + " " + h + " " + l * w * h);
        }
    }
}