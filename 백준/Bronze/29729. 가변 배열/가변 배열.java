import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int S = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int curr = 0;
        for (int i = 0; i < N + M; i++) {
            if(Integer.parseInt(br.readLine()) == 1){
                curr++;
            } else {
                curr--;
            }
            if(curr > S){
                S *= 2;
            }
        }
        System.out.println(S);
    }
}