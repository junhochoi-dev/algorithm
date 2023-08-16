import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int[] a, b;

    static int binary_search(int[] arr, int std){
        int left = 0;
        int right = arr.length - 1;
        if(arr[right] < std) return arr.length - 1;
        while(true){
            int mid = (left + right) / 2;
            if(left == mid || right == mid) return mid;
            if(arr[mid] >= std) right = mid;
            if(arr[mid] < std) left = mid;
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());

            a = new int[N];
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++) a[i] = Integer.parseInt(st.nextToken());

            b = new int[M];
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < M; i++) b[i] = Integer.parseInt(st.nextToken());
            Arrays.sort(b);
            int ans = 0;
            for(int i = 0; i < N; i++){
                int index = binary_search(b, a[i]);
                if(b[index] < a[i]) index++;
                ans += index;
            }
            sb.append(ans).append('\n');
        }
        System.out.println(sb);
    }
}
