import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        long[] price = new long[3];
        for (int i = 0; i < 3; i++) {
            price[i] = Long.parseLong(st.nextToken());
        }
        Arrays.sort(price);
        st = new StringTokenizer(br.readLine());
        long[] bottle = new long[3];
        for (int i = 0; i < 3; i++) {
            bottle[i] = Long.parseLong(st.nextToken());
        }
        Arrays.sort(bottle);
        long answer = 0;
        for (int i = 0; i < 3; i++) {
            answer += price[i] * bottle[i];
        }
        System.out.println(answer);
    }
}