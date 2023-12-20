import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int lv = Integer.parseInt(st.nextToken());
        String judgement = st.nextToken();
        if(judgement.equals("miss")) System.out.println(0);
        if(judgement.equals("bad")) System.out.println(200 * lv);
        if(judgement.equals("cool")) System.out.println(400 * lv);
        if(judgement.equals("great")) System.out.println(600 * lv);
        if(judgement.equals("perfect")) System.out.println(1000 * lv);
    }
}
