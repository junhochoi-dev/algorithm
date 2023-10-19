
import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        String answer[] = {"zilch", "double", "double-double", "triple-double"};
        int N = Integer.parseInt(br.readLine());
        for(int i = 0; i < N; i++){
            int sum = 0;
            String temp = br.readLine();
            st = new StringTokenizer(temp);
            for(int j = 0; j < 3; j++){
                if(Integer.parseInt(st.nextToken()) >= 10) sum++;
            }
            sb.append(temp).append('\n').append(answer[sum]).append("\n\n");
        }
        System.out.println(sb);
    }
}
