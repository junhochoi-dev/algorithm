import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        double sum = 0;
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            sum += Math.pow(Double.parseDouble(st.nextToken()), 3);
        }
        System.out.println(Math.pow(sum, 1.0 / 3));

    }
}
