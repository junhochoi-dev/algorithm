import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int[] arr = new int[5];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < 5; i++) arr[i] = Integer.parseInt(st.nextToken());
        int answer = 0;

        for(int i = 1; i < 5; i++) if(arr[0] - arr[i] <= 1000) answer++;
        System.out.println(answer);
    }
}
