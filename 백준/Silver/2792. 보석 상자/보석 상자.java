import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, M, answer = Integer.MAX_VALUE;
    static int gem[];
    static int able(int std){
        int cnt = 0;
        int maximum = 0;
        for(int i = 0; i < M; i++){
            cnt += gem[i] / std + (gem[i] % std == 0 ? 0 : 1);
        }
        //if(cnt == N) answer = Math.min(answer, std);
        return cnt;
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        gem = new int[M];
        for(int i = 0; i < M; i++){
            gem[i] = Integer.parseInt(br.readLine());
        }

        int low = 1;
        int high = 1_000_000_000;
        while(low <= high){
            int mid = (low + high) / 2;
            if(able(mid) > N){
                low = mid + 1;
            } else {
                answer = mid;
                high = mid - 1;
            }
        }
        System.out.println(answer);
    }
}
