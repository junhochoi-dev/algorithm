import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        long X = Integer.parseInt(st.nextToken());
        long Y = Integer.parseInt(st.nextToken());
        long Z = Y * 100 / X;

        long low = 1;
        long high = Integer.MAX_VALUE;
        long answer = Integer.MAX_VALUE;
        while(low < high){
            long mid = (low + high) / 2;
            if((Y + mid) * 100 / (X + mid) > Z){
                high = mid;
                answer = Math.min(answer, mid);
            }
            else low = mid + 1;
        }
        System.out.println(answer == Integer.MAX_VALUE ? -1 : answer);
    }
}