import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());

        int index = -1;
        for(int i = N - 1; i >= 1; i--){
            if(arr[i - 1] > arr[i]){
                index = i - 1;
                int changeIndex = -1;
                int gap = Integer.MAX_VALUE;
                for(int j = index + 1; j < N; j++){
                    if(arr[index] > arr[j]){
                        if(gap > arr[index] - arr[j]){
                            gap = arr[index] - arr[j];
                            changeIndex = j;
                        }
                    }
                }
                int temp = arr[index];
                arr[index] = arr[changeIndex];
                arr[changeIndex] = temp;
                break;
            }
        }
        if(index == -1) System.out.println(-1);
        else{
            int[] back = Arrays.copyOfRange(arr, index + 1, N);
            for(int i = 0; i <= index; i++) sb.append(arr[i]).append(" ");
            Arrays.sort(back);
            for(int i = back.length - 1; i >= 0; i--) sb.append(back[i]).append(" ");
        }
        System.out.println(sb);
    }
}