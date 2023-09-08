import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int P = Integer.parseInt(br.readLine());
        int C = Integer.parseInt(br.readLine());
        System.out.println(P * 50 - C * 10 + (P > C ? 500 : 0));
    }
}