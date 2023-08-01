import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        for(int t = 0; t < 10; t++){
            int dump = Integer.parseInt(br.readLine());

            int[] arr = new int[100];
            StringTokenizer st = new StringTokenizer(br.readLine());

            int sum = 0;
            for(int i = 0; i < 100; i++){
                arr[i] = Integer.parseInt(st.nextToken());
            }

            for(int i = 0; i < dump; i++){
                Arrays.sort(arr);
                if(arr[100 - 1] == arr[0]) break;
                arr[0] += 1;
                arr[100 - 1] -= 1;
            }
            Arrays.sort(arr);
            System.out.printf("#%d %d\n", t + 1, Math.abs(arr[100 - 1] - arr[0]));
        }
    }
}
