import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        st = new StringTokenizer(br.readLine());
        int satisfaction = 0;
        int eggplant = 0;
        for(int i = 0; i < N; i++) {
            int x = Integer.parseInt(st.nextToken());
            satisfaction += x;
            pq.add(-x);
            while(satisfaction >= M){
                satisfaction -= -pq.poll() * 2;
                eggplant++;
            }
        }
        System.out.println(eggplant);
    }
}
