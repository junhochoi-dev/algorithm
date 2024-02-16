import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int[] arr = new int[N];
        long[] cumulateArr = new long[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            arr[i] = Integer.parseInt(st.nextToken());

            cumulateArr[i] += arr[i];
            if(i != 0) cumulateArr[i] += cumulateArr[i - 1];
        }

        long count = 0;
        for(int i = 0; i < N; i++){
            long head = cumulateArr[i];

            int low = i + 1;
            int high = N - 1;
            int left = -1;
            while(low <= high){
                int mid = (low + high) / 2;
                long chest = cumulateArr[mid] - cumulateArr[i];
                long belly = cumulateArr[N - 1] - cumulateArr[mid];

                if(head >= belly) {
                    high = mid - 1;
                } else if(chest <= belly) {
                    low = mid + 1;
                } else {
                    left = mid;
                    high = mid - 1;
                }
            }

            low = i + 1;
            high = N - 1;
            int right = -1;
            while(low <= high){
                int mid = (low + high) / 2;
                long chest = cumulateArr[mid] - cumulateArr[i];
                long belly = cumulateArr[N - 1] - cumulateArr[mid];

                if(head >= belly) {
                    high = mid - 1;
                } else if(chest <= belly) {
                    low = mid + 1;
                } else {
                    right = mid;
                    low = mid + 1;
                }
            }
            if(left == -1 || right == -1) continue;
            count += right - left + 1;
        }
        System.out.println(count);
    }
}
