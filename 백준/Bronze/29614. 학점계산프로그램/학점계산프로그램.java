import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        String str = br.readLine();
        int cnt = 0;
        double sum = 0;
        for(int i = 0 ; i < str.length(); i++){
            if('A' <= str.charAt(i) && str.charAt(i) <= 'D'){
                sum += 4.0 - (str.charAt(i) - 'A');
                cnt++;
            }
            else if(str.charAt(i) == 'F') cnt++;
            else sum += 0.5;
        }
        System.out.printf("%.5f", sum / cnt);
    }
}