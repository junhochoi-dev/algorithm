import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int K = 1;
        while(true){
            if(1 + K + K * K == N){
                System.out.println(K);
                break;
            }
            K++;
        }
    }
}