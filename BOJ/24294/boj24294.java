import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        Long w1 = Long.parseLong(br.readLine());
        Long h1 = Long.parseLong(br.readLine());
        Long w2 = Long.parseLong(br.readLine());
        Long h2 = Long.parseLong(br.readLine());
        System.out.println(Math.max(w1, w2) * 2 + (h1 + h2) * 2 + 4);
    }
}