import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N + 1];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }
        int M = Integer.parseInt(br.readLine());
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int g = Integer.parseInt(st.nextToken());
            int idx = Integer.parseInt(st.nextToken());
            if(g == 1){
                for(int mul = 1; mul * idx <= N; mul++){
                    arr[mul * idx] = arr[mul * idx] == 1 ? 0 : 1;
                }
            }
            if(g == 2){
                arr[idx] = arr[idx] == 1 ? 0 : 1;
                for(int j = 1; idx - j >= 1 && idx + j <= N; j++){
                    if(arr[idx - j] == arr[idx + j]){
                        arr[idx - j] = arr[idx - j] == 1 ? 0 : 1;
                        arr[idx + j] = arr[idx + j] == 1 ? 0 : 1;
                    }
                    else break;
                }
            }
        }
        for(int i = 1; i <= N; i++){
            System.out.print(arr[i] + " ");
            if(i % 20 == 0) System.out.println();
        }
    }
}