import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        double a = Double.parseDouble(br.readLine());
        System.out.printf("%.10f\n", 100 / a);
        System.out.printf("%.10f", 100 / (100 - a));
    }
}