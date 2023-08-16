import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int z(int n, int r, int c){
        if(n == 0) return 0;
        int std = 1 << (n - 1);
        if(r < std && c < std) return z(n - 1, r, c);
        if(r < std && c >= std) return std * std + z(n - 1, r, c - std);
        if(r >= std && c < std) return 2 * (std * std) + z(n - 1, r - std, c);
        if(r >= std && c >= std) return 3 * (std * std) + z(n - 1, r - std, c - std);
        return 0;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        System.out.println(z(N, R, C));
    }
}
