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

        int[] a = new int[N];
        int[] b = new int[M];

        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) a[i] = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < M; i++) b[i] = Integer.parseInt(st.nextToken());

        Arrays.sort(a);
        Arrays.sort(b);

        long win = 0, draw = 0, lose = 0;

        for(int i = 0; i < N; i++){
            int curr = a[i];

            int low = 0;
            int high = M - 1;

            int upperbound = M;
            while(low <= high){
                int mid = (low + high) / 2;
                if(curr < b[mid]){
                    high = mid - 1;
                    upperbound = mid;
                } else {
                    low = mid + 1;
                }
            }

            low = 0;
            high = M - 1;
            int lowerbound = -1;
            while(low <= high){
                int mid = (low + high) / 2;
                if(curr <= b[mid]){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                    lowerbound = mid;
                }
            }
            win += lowerbound + 1;
            draw += upperbound - lowerbound - 1;
            lose += M - upperbound;
        }
        System.out.print(win + " " + lose + " " + draw);
    }
}
