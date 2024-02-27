import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class POLUTION{
        int index;
        long level;

        public POLUTION(int index, long level) {
            this.index = index;
            this.level = level;
        }
    }
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());
        long LSUM = 0, RSUM = 0;
        ArrayList<POLUTION> arr = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int index = Integer.parseInt(st.nextToken());
            long level = Long.parseLong(st.nextToken());
            arr.add(new POLUTION(index, level));
        }
        arr.sort((o1, o2) -> Integer.compare(o1.index, o2.index));
        int MXIDX = arr.get(N - 1).index, MNIDX = arr.get(0).index;
        for (int i = 0; i < N; i++) {
            LSUM += (arr.get(i).index - MNIDX) + arr.get(i).level;
            RSUM += (MXIDX - arr.get(i).index) + arr.get(i).level;
        }
        long answer = Long.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            if(i != 0) answer = Math.min(answer, LSUM - (arr.get(i).index - MNIDX) - arr.get(i).level);
            if(i != N - 1) answer = Math.min(answer, RSUM - (MXIDX - arr.get(i).index) - arr.get(i).level);
        }
        answer = Math.min(answer, LSUM - (long) (N - 1) * (arr.get(1).index - MNIDX) - arr.get(0).level);
        answer = Math.min(answer, LSUM - (MXIDX - MNIDX) - arr.get(N - 1).level);

        answer = Math.min(answer, RSUM - (long) (N - 1) * (MXIDX - arr.get(N - 2).index) - arr.get(N - 1).level);
        answer = Math.min(answer, RSUM - (MXIDX - MNIDX) - arr.get(0).level);

        System.out.println(answer);
    }
}