import java.io.*;
import java.util.*;

public class Main {
    public static long mul(long A, long B, long C){
        if(B == 1) return A % C;
        long temp = mul(A, B / 2, C);
        if(B % 2 == 0) return temp * temp % C;
        else return (temp * temp) % C * A % C;
    }
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        long A = Integer.parseInt(st.nextToken());
        long B = Integer.parseInt(st.nextToken());
        long C = Integer.parseInt(st.nextToken());
        System.out.println(mul(A, B, C));
    }
}
