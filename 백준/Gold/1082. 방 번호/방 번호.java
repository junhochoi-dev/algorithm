import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int lowNum = 0;
        int lowCost = Integer.MAX_VALUE;

        int N = Integer.parseInt(br.readLine());

        int[] number = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) {
            number[i] = Integer.parseInt(st.nextToken());
            if(number[i] < lowCost) {
                lowCost = number[i];
                lowNum = Math.max(i, lowNum);
            }
        }

        int M = Integer.parseInt(br.readLine());
        int[] arr = new int[M / lowCost];
        Arrays.fill(arr, -1);

        M %= lowCost;
        boolean top = true;
        for(int i = 0; i < arr.length; i++){
            M += lowCost;
            for(int j = N - 1; j >= 0; j--){
                if(M >= number[j]){
                    if(top && j == 0) continue;
                    M -= number[j];
                    arr[i] = j;
                    break;
                }
            }
            if(top && arr[i] != -1) top = false;
        }
        for(int i = 0; i < arr.length; i++){
            if(arr[i] != -1) {
                sb.append(arr[i]);
            }
        }
        System.out.println(sb.length() == 0 ? 0 : sb);

    }
}