import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());

        int maximum = 0;
        int[] line = new int[500 + 1];
        for (int i = 0; i < N; i++) {
            String zebra = br.readLine();
            int cnt = 0;
            for (int j = 0; j < L; j++) {
                if(j > 0 && zebra.charAt(j) == '1' && zebra.charAt(j - 1) == '1') continue;
                if(zebra.charAt(j) == '1') cnt++;
            }
            line[cnt]++;
            maximum = Math.max(maximum, cnt);
        }
        System.out.println(maximum + " " + line[maximum]);
    }
}