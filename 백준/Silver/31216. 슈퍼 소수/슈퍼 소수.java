import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) throws IOException {
        ArrayList<Integer> superprime = new ArrayList<>();
        int primecnt = 1, superprimecnt = 0, num = 0;
        while(superprimecnt < 3000){
            if(isPrime(num)){
                if(isPrime(primecnt)){
                    superprime.add(num);
                    superprimecnt++;
                }
                primecnt++;
            }
            num++;
        }
        int T = Integer.parseInt(br.readLine());
        for (int t = 0; t < T; t++) {
            int idx = Integer.parseInt(br.readLine());
            sb.append(superprime.get(idx - 1)).append('\n');
        }
        System.out.println(sb);
    }
}