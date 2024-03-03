import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int D = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[] arr = new int[N + 2];
        for (int i = 1; i <= N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        arr[0] = 0; arr[N + 1] = D;

        Arrays.sort(arr);

        int answer = Integer.MAX_VALUE;
        int left = 0, right = D;
        while(left <= right){
            int mid = (left + right) / 2;
            int cnt = 0, std = 0;
            for (int i = 1; i <= N + 1; i++) {
                if(arr[i] - arr[std] < mid){
                    cnt++;
                } else {
                    std = i;
                }
            }
            if(cnt <= M) {
                left = mid + 1;
                answer = mid;
            } else {
                right= mid - 1;
            }
        }

        System.out.println(answer);
    }
}