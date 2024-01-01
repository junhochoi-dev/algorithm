import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        boolean streak = false;
        int best = 0, curr = 0;
        for(int i = 0; i < N; i++){
            if(arr[i] > 0){
                curr++;
                best = Math.max(best, curr);
            } else {
                curr = 0;
            }
        }
        System.out.println(best);
    }
}
