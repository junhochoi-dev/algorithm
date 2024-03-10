import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int w = Integer.parseInt(br.readLine());
        System.out.println((int)Math.sqrt(w << 1) << 2);
    }
}