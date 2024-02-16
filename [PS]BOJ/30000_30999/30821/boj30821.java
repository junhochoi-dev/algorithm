import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        long answer = 1L;
        int N = Integer.parseInt(br.readLine());
        for(int i = N; i > N - 5; i--) answer *= i;
        System.out.println(answer / 120);
    }
}
