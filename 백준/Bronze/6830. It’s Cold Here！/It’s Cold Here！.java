import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        String answer = null;
        int std = Integer.MAX_VALUE;
        while(true){
            st = new StringTokenizer(br.readLine());
            String region = st.nextToken();
            int temperature = Integer.parseInt(st.nextToken());
            if (std > temperature) {
                std = temperature;
                answer = region;
            }
            if(region.equals("Waterloo")) break;
        }
        System.out.println(answer);
    }
}