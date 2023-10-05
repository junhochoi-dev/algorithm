    import java.io.*;
    import java.util.*;

    public class Main {
        static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        static StringBuilder sb = new StringBuilder();
        static StringTokenizer st;

        public static void main(String[] args) throws Exception {
            long N = Long.parseLong(br.readLine());

            if(N == 0) System.out.println(0);
            else {
                long low = 0;
                long high = N;;
                long answer = Long.MAX_VALUE;
                while(low <= high){
                    long mid = (low + high) / 2;
                    if(Math.pow(mid, 2) >= N){
                        answer = Math.min(answer, mid);
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                System.out.println(answer);
            }
        }
    }