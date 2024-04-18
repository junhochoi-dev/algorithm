import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int X = Integer.parseInt(br.readLine());
        int N = Integer.parseInt(br.readLine());
        int cnt = 0;
        while(X < N){
            int r = X % 3;
            if(r == 0) X++;
            if(r == 1) X *= 2;
            if(r == 2) X *= 3;
            cnt++;
        }
        System.out.println(cnt);
    }
}