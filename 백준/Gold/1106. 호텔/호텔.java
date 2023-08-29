import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int C = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int[] customers = new int[C + 1 + 100];
        Arrays.fill(customers, Integer.MAX_VALUE);
        HashMap<Integer, Integer> promotion = new HashMap<Integer, Integer>();
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            int cost = Integer.parseInt(st.nextToken());
            int cnt = Integer.parseInt(st.nextToken());
            customers[cnt] = Math.min(customers[cnt], cost);
            if(promotion.keySet().contains(cnt)){
                if(cost < promotion.get(cnt)){
                    promotion.put(cnt, cost);
                }
            }
            else promotion.put(cnt, cost);
        }
        for(int i = 0; i < customers.length; i++){
            for(int cnt: promotion.keySet()){
                if(i - cnt >= 0 && customers[i - cnt] != Integer.MAX_VALUE){
                    customers[i] = Math.min(customers[i], customers[i - cnt] + promotion.get(cnt));
                }
            }
        }
        int answer = Math.min(Integer.MAX_VALUE, customers[C]);
        for(int i = C + 1; i < customers.length; i++) answer = Math.min(answer, customers[i]);
        System.out.println(answer);
    }
}