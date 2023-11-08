import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int[][] dx = {
                {0, 0, 0, 1, 1, 1, 2, 2, 2},
                {0, 0, 0, -1, -1, -1, 1, 1, 1},
                {0, 0, 0, -1, -1, -1, -2, -2, -2}
        };
        int[][] dy = {
                {1, 2, 0, 1, 2, 0, 1, 2, 0},
                {-1, 0, 1, -1, 0, 1, -1, 0, 1},
                {-2, -1, 0, -2, -1, 0, -2, -1, 0}
        };
        st = new StringTokenizer(br.readLine());
        long H = Long.parseLong(st.nextToken());
        long W = Long.parseLong(st.nextToken());
        int N = Integer.parseInt(st.nextToken());

        HashSet<Long> loc = new HashSet<Long>();
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            long x = Long.parseLong(st.nextToken()) - 1;
            long y = Long.parseLong(st.nextToken()) - 1;
            loc.add(x * W + y);
        }

        long[] cnt = new long[10];
        for(long curr : loc){
            long x = curr / W;
            long y = curr % W;

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int count = 0;
                    boolean able = true;
                    for(int k = 0; k < 9; k++){
                        long tx = x + dx[i][k];
                        long ty = y + dy[j][k];
                        if(tx < 0 || ty < 0 || tx >= H || ty >= W){
                            able = false;
                            break;
                        }
                        if(loc.contains(tx * W + ty)) count++;
                    }
                    if(able) cnt[count]++;
                }
            }
        }
        cnt[0] = (H - 2) * (W - 2);
        for(int i = 1; i < 10; i++) cnt[i] /= i;
        for(int i = 1; i < 10; i++) cnt[0] -= cnt[i];
        for(int i = 0; i < 10; i++) System.out.println(cnt[i]);
    }
}
