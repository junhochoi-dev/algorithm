import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int[] arr = new int[N];
        int[] sum = new int[N];

        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
            sum[i] = arr[i] + (i == 0 ? 0 : sum[i - 1]);
        }

        int minimumsum = Integer.MAX_VALUE;
        int answersum = 0;
        for(int i = 0; i < N; i++){
            for(int j = i + 1; j < N; j++){
                int left = i;
                int right = j;
                while(left <= right){
                    int mid = (left + right) / 2;

                    int leftsum = sum[mid] - (i == 0 ? 0 : sum[i - 1]);
                    int rightsum = sum[j] - sum[mid];

                    if(minimumsum > Math.abs(leftsum - rightsum)){
                        minimumsum = Math.abs(leftsum - rightsum);
                        answersum = sum[j] - (i == 0 ? 0 : sum[i - 1]);
                    } else if(minimumsum == Math.abs(leftsum - rightsum)){
                        answersum = Math.max(answersum, sum[j] - (i == 0 ? 0 : sum[i - 1]));
                    }

                    if(leftsum < rightsum){
                        left = mid + 1;
                    } else {
                        right = mid - 1;
                    }
                }
            }
        }
        System.out.println(answersum);
    }
}