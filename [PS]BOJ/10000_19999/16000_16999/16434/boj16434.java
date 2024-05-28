import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int ATK = Integer.parseInt(st.nextToken());

        int[][] TAH = new int[N][3];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < 3; j++) {
                TAH[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        long answer = Long.MAX_VALUE;
        long low = 0, high = Long.MAX_VALUE;
        while(low <= high){
            long mid = (low + high) / 2;
            boolean able = true;
            long currATK = ATK, currHP = mid;
            for (int i = 0; i < N; i++) {
                if(TAH[i][0] == 1) {
                    long atkCount = (long) Math.ceil((double) TAH[i][2] / currATK);
                    long myCount = (long) Math.ceil((double) currHP / TAH[i][1]);
                    if(atkCount > myCount) {
                        able = false;
                        break;
                    }
                    currHP -= (atkCount - 1) * TAH[i][1];
                }
                if(TAH[i][0] == 2) {
                    currATK += TAH[i][1];
                    currHP = Math.min(mid, currHP + TAH[i][2]);
                }
            }
            if(able){
                answer = Math.min(answer, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        System.out.println(answer);
    }
}