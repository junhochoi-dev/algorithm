import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            int ans = 1;
            int level = Integer.parseInt(st.nextToken());
            for(int std : new int[]{300, 275, 250}){
                if(level < std) ans++;
            }
            sb.append(ans).append(" ");
        }
        System.out.println(sb);
    }
}