import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    static StringBuilder sb = new StringBuilder();
    static void hanoi(int n, int start, int end, int temp){
        if(n == 1){
            sb.append(start).append(" ").append(end).append("\n");
            return;
        }
        hanoi(n - 1, start, temp, end);
        hanoi(1, start, end, temp);
        hanoi(n - 1, temp, end, start);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        System.out.println((int)Math.pow(2, N) - 1);
        hanoi(N, 1, 3, 2);
        System.out.println(sb);
    }
}
