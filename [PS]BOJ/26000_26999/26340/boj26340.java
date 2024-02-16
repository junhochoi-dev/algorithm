import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        for(int i = 0; i < N; i++){
            String input = br.readLine();
            System.out.println("Data set: " + input);

            st = new StringTokenizer(input);
            PriorityQueue<Integer> pq = new PriorityQueue<>();
            pq.add(-Integer.parseInt(st.nextToken()));
            pq.add(-Integer.parseInt(st.nextToken()));
            int k = Integer.parseInt(st.nextToken());
            for(int j = 0; j < k; j++){
                pq.add(pq.poll() / 2);
            }
            System.out.println(-pq.poll() + " " + -pq.poll());
            System.out.println();
        }
    }
}