import java.io.*;
import java.util.*;

public class Main {
    static boolean shawm(long n){
        String num = String.valueOf(n);
        boolean check = false;
        for(int i = 1; i < num.length() - 1; i++){
            if(num.charAt(i - 1) == '6' && num.charAt(i) == '6' && num.charAt(i + 1) == '6'){
                check = true;
                break;
            }
        }
        return check;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        long num = 666;
        int rank = 0;
        while(true){
            if(shawm(num)) rank++;
            if(rank == N){
                System.out.println(num);
                break;
            }
            num++;
        }
    }
}
