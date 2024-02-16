import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N, sum = 0, answer = 0;
    static int[] arr;
    static HashSet<Integer> visietd = new HashSet<Integer>();
    static void backTracking(){
        if(visietd.size() == N - 2){
            answer = Math.max(sum, answer);
            return;
        }
        for (int i = 1; i < N - 1; i++){
            if(visietd.contains(i)) continue;
            visietd.add(i);
            int left = 0, right = 0;;
            for(int j = i - 1; j >= 0; j--){
                if(visietd.contains(j)) continue;
                left = arr[j];
                break;
            }
            for(int j = i + 1; j < N; j++){
                if(visietd.contains(j)) continue;
                right = arr[j];
                break;
            }
            if(left != 0 && right != 0){
                int mul = left * right;
                sum += mul;
                backTracking();
                sum -= mul;
            }
            visietd.remove(i);
        }
    }
    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        arr = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) arr[i] = Integer.parseInt(st.nextToken());
        backTracking();
        System.out.println(answer);
    }
}