import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static StringBuilder sb = new StringBuilder();
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int D = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        int[] sushi = new int[N + K];
        HashMap<Integer, Integer> sushiList = new HashMap<Integer, Integer>();
        int sushiCnt = 0;
        for (int i = 0; i < N; i++) {
            sushi[i] = Integer.parseInt(br.readLine());
            if(i < K) {
                sushi[N + i] = sushi[i];
                if(!sushiList.containsKey(sushi[i])) sushiList.put(sushi[i], 0);
                sushiList.put(sushi[i], sushiList.get(sushi[i]) + 1);
                if(sushiList.get(sushi[i]) == 1) sushiCnt++;
            }
        }
        int maximum = sushiCnt;
        if(!sushiList.containsKey(C)) maximum++;

        for(int i = 1, j = K; i <= N; i++, j++){
            sushiList.put(sushi[i - 1], sushiList.get(sushi[i - 1]) - 1);
            if(sushiList.get(sushi[i - 1]) == 0) sushiCnt--;

            if(!sushiList.containsKey(sushi[j])) sushiList.put(sushi[j], 0);
            sushiList.put(sushi[j], sushiList.get(sushi[j]) + 1);
            if(sushiList.get(sushi[j]) == 1) sushiCnt++;

            if(!sushiList.containsKey(C) || sushiList.get(C) == 0) maximum = Math.max(maximum, sushiCnt + 1);
            else maximum = Math.max(maximum, sushiCnt);
        }

        System.out.println(maximum);
    }
}
