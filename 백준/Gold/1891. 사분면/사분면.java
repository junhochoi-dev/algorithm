import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int L = Integer.parseInt(st.nextToken());
        char[] piece = new char[L];
        String tmp = st.nextToken();
        for(int i = 0; i < L; i++) {
            if(tmp.charAt(i) == '1') piece[i] = '1';
            if(tmp.charAt(i) == '2') piece[i] = '0';
            if(tmp.charAt(i) == '3') piece[i] = '2';
            if(tmp.charAt(i) == '4') piece[i] = '3';
        }
        long x = 0, y = 0;
        for(int i = 0, l = L - 1; l >= 0; l--, i++){
            long std = piece[i] - '0';
            x += ((long)1 << l) * (std / 2);
            y += ((long)1 << l) * (std % 2);
        }
        st = new StringTokenizer(br.readLine());
        y += Long.parseLong(st.nextToken());
        x -= Long.parseLong(st.nextToken());
        if(x < 0 || y < 0 || x >= ((long)1 << L) || y >= ((long)1 << L)) System.out.println(-1);
        else{
            for(int i = 0, l = L - 1; l >= 0; l--, i++){
                long part = x / ((long)1 << l) * 2 + y / ((long)1 << l);
                if(part == 0) sb.append(2);
                if(part == 1) sb.append(1);
                if(part == 2) sb.append(3);
                if(part == 3) sb.append(4);
                x %= ((long)1 << l);
                y %= ((long)1 << l);
            }
            System.out.println(sb);
        }
    }
}
