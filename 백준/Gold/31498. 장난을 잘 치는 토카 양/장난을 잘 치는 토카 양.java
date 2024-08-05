import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        long A = Long.parseLong(st.nextToken());
        long B = Long.parseLong(st.nextToken());
        st = new StringTokenizer(br.readLine());
        long C = Long.parseLong(st.nextToken());
        long D = Long.parseLong(st.nextToken());
        long K = Long.parseLong(br.readLine());
        long MAXIMUM = (long)Math.ceil((double)(A + C) / D);
        long answer = MAXIMUM, cut = MAXIMUM;
        long low = 1, high = MAXIMUM;
        while(low <= high){
            long mid = (low + high) / 2;
            if(B - K * (mid - 1) <= 0){
                high = mid - 1;
                continue;
            }
            long speed = B * mid - K * mid * (mid - 1) / 2;
            long TOCA = A - speed;
            long DOLDOL = A + C - D * mid;
            if(TOCA <= 0){ // safe
                answer = Math.min(answer, mid);
                high = mid - 1;
            } else { // dangerous
                if(TOCA >= DOLDOL){
                    cut = Math.min(cut, mid);
                }
                low = mid + 1;
            }
        }
        System.out.println(answer < cut ? answer : -1);
    }
}