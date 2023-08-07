import java.io.*;
import java.util.*;

public class Main{
    static int numcnt(int num, int std){
        int ans = 0;
        int k = 1;
        while((int)Math.pow(std, k) <= num){
            ans += num / (int)Math.pow(std, k);
            k++;
        }
        return ans;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());
        int two = numcnt(N, 2) - numcnt(N - R, 2) - numcnt(R, 2);
        int five = numcnt(N, 5) - numcnt(N - R, 5) - numcnt(R, 5);
        System.out.println(Math.min(two, five));
    }
}
