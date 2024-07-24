import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BigInteger num42 = new BigInteger("42");
        while(true){
            BigInteger num = new BigInteger(br.readLine());
            if(num.equals(BigInteger.ZERO)) break;
            sb.append(num.remainder(num42).equals(BigInteger.ZERO) ? "PREMIADO" : "TENTE NOVAMENTE").append('\n');
        }
        System.out.println(sb);
    }
}