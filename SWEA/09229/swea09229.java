import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            int[] arr = new int[N];
            for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
            Arrays.sort(arr);
            int left = 0;
            int right = N - 1;
            int maximum = -1;
            while(left < right){
                int sum = arr[left] + arr[right];

                if(sum < M) {
                    maximum = Math.max(sum, maximum);
                    left++;
                }
                else if(sum > M) right--;
                else{
                    maximum = sum;
                    break;
                }
            }
            System.out.println("#" + t + " " + maximum);
        }
    }
}
