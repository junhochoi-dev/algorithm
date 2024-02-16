import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int sum = 0;
        for(int i = 0; i < 10; i++){
            sum += Integer.parseInt(br.readLine());
        }
        System.out.println(sum / 2);
    }
}