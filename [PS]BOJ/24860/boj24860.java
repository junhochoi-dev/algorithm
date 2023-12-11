import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        long V1 = Long.parseLong(st.nextToken());
        long J1 = Long.parseLong(st.nextToken());
        st = new StringTokenizer(br.readLine());
        long V2 = Long.parseLong(st.nextToken());
        long J2 = Long.parseLong(st.nextToken());
        st = new StringTokenizer(br.readLine());
        long V3 = Long.parseLong(st.nextToken());
        long D3 = Long.parseLong(st.nextToken());
        long J3 = Long.parseLong(st.nextToken());
        System.out.println((V1 * J1 + V2 * J2) * V3 * D3 * J3);
    }
}
