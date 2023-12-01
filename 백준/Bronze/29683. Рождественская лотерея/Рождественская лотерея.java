import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int A = Integer.parseInt(st.nextToken());

        int answer = 0;
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            answer += Integer.parseInt(st.nextToken()) / A;
        }
        System.out.println(answer);
    }
}
