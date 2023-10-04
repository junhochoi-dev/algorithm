import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        int group[] = {1, 3, 5};
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int G = Integer.parseInt(st.nextToken());
            int C = Integer.parseInt(st.nextToken());
            int E = Integer.parseInt(st.nextToken());
            if(E - C <= 0) System.out.println(0);
            else System.out.println((E - C) * group[G - 1]);
        }
    }
}