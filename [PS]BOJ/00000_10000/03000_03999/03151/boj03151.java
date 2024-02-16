import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, STD;
    static int arr[];
    static int lower_bound(int low, int high){
        while(low < high){
            int mid = (low + high) / 2;
            if(STD + arr[mid] >= 0){
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
    static int upper_bound(int low, int high){
        while(low < high){
            int mid = (low + high) / 2;
            if(STD + arr[mid] <= 0){
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
    public static void main(String[] args) throws IOException {
        N = Integer.parseInt(br.readLine());

        arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

        long answer = 0;
        for(int i = 0; i < N - 2; i++){
            for(int j = i + 1; j < N - 1; j++){
                STD = arr[i] + arr[j];
                int s = lower_bound(j + 1, N);
                int e = upper_bound(j + 1, N);
                answer += e - s;
            }
        }

        System.out.println(answer);
    }
}