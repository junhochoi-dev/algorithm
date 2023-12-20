import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            int N = Integer.parseInt(br.readLine());
            HashSet<Integer> numList = new HashSet<>();

            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++) numList.add(Integer.parseInt(st.nextToken()));


            int M = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < M; i++){
                if(numList.contains(Integer.parseInt(st.nextToken()))) sb.append(1).append('\n');
                else sb.append(0).append('\n');
            }
        }
        System.out.println(sb);
    }
}
