import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        int GH = Integer.parseInt(br.readLine());

        st = new StringTokenizer(br.readLine());
        int answer = 0;
        for(int i = 0; i < N - 1; i++) if(Integer.parseInt(st.nextToken()) > GH) answer++;

        System.out.println(answer + 1);
    }
}
