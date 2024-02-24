import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());

        int[] stake = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            stake[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(stake);

        int[] flagpole = new int[M];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < M; i++) {
            flagpole[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(flagpole);

        double answer = -1;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int low = 0;
                int high = M - 1;
                while(low <= high){
                    int mid = (low + high) / 2;
                    double area = (double) ((stake[j] - stake[i]) * flagpole[mid]) / 2;
                    if(area <= R){
                        low = mid + 1;
                        answer = Math.max(answer, area);
                    } else {
                        high = mid - 1;
                    }
                }
            }
        }
        System.out.println(answer == -1 ? -1 : String.format("%.1f", answer));
    }
}