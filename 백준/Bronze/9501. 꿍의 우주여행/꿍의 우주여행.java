import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for (int t = 0; t < T; t++) {
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            double D = Double.parseDouble(st.nextToken());
            int count = 0;
            for (int i = 0; i < N; i++) {
                st = new StringTokenizer(br.readLine());
                double V = Double.parseDouble(st.nextToken());
                double F = Double.parseDouble(st.nextToken());
                double C = Double.parseDouble(st.nextToken());
                if(D <= V * F / C){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}