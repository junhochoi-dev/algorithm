import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int INF = 987564321;

    static class POINT implements Comparable<POINT>{
        int height, num;

        POINT(int num, int height){
            this.num = num;
            this.height = height;
        }

        @Override
        public int compareTo(POINT o) {
            return Integer.compare(o.height, this.height);
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        PriorityQueue<POINT> pq = new PriorityQueue<POINT>();

        st = new StringTokenizer(br.readLine());
        int height[] = new int[N + 1];
        for(int i = 1; i <= N; i++) {
            height[i] = Integer.parseInt(st.nextToken());
            pq.add(new POINT(i, height[i]));
        }

        HashMap<Integer, HashSet<Integer>> edge = new HashMap<Integer, HashSet<Integer>>();
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            if(height[a] < height[b]){
                int temp = a;
                a = b;
                b = temp;
            }

            if(!edge.containsKey(a)) edge.put(a, new HashSet<Integer>());
            edge.get(a).add(b);
        }

        int answer[] = new int[N + 1];

        while(!pq.isEmpty()){
            int curr = pq.poll().num;
            answer[curr] = Math.max(answer[curr], 1);

            if(edge.containsKey(curr)){
                for(int next : edge.get(curr)){
                    answer[next] = Math.max(answer[next], answer[curr] + 1);
                }
            }
        }

        for(int i = 1; i <= N; i++){
            sb.append(answer[i]).append('\n');
        }
        System.out.println(sb);
    }
}