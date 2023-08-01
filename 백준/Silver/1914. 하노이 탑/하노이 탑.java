import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    static void hanoi(int n, int start, int end, int temp){
        if(n == 1){
            System.out.println(start + " " + end);
            return;
        }
        hanoi(n - 1, start, temp, end);
        hanoi(1, start, end, temp);
        hanoi(n - 1, temp, end, start);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        if(N > 20) {
            BigInteger ans = BigInteger.ONE;
            for(int i = 1; i <= N; i++){
                ans = ans.multiply(BigInteger.valueOf(Long.parseLong("2")));
            }
            System.out.println(ans.subtract(BigInteger.ONE));
        }
        else{
            System.out.println((int)Math.pow(2, N) - 1);
            hanoi(N, 1, 3, 2);
        }
    }
}
