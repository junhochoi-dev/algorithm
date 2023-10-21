import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            int N = Integer.parseInt(br.readLine());
            double sum = 0;
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                String s = st.nextToken();
                double cnt = Double.parseDouble(st.nextToken());
                double cst = Double.parseDouble(st.nextToken());
                sum += cnt * cst;
            }
            System.out.printf("$%.2f\n", sum);
        }
    }
}