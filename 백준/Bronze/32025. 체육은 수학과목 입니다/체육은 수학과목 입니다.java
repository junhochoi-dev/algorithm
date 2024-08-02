import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
		int h = Integer.parseInt(br.readLine());
		int w = Integer.parseInt(br.readLine());
        System.out.println(h < w ? h * 50 : w * 50);
    }
}