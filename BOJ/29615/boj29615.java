import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int[] arr = new int[N];
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        HashSet<Integer> numList = new HashSet<Integer>();
        for(int i = 0; i < M; i++) numList.add(Integer.parseInt(st.nextToken()));

        int answer = 0;
        for(int i = 0; i < M; i++){
            if(!numList.contains(arr[i])) answer++;
        }
        System.out.println(answer);
    }
}
