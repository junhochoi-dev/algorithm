import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N + 1];
        int[] ans = new int[N + 1];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++) arr[i] = Integer.parseInt(st.nextToken());
        Stack<Integer> stack = new Stack<Integer>();
        int idx = 1;
        while(true){
            if(idx > N) break;
            if(stack.empty()){
                ans[idx] = 0;
                stack.push(idx);
                idx++;
                continue;
            }
            if(arr[stack.peek()] < arr[idx]) {
                stack.pop();
            }
            else{
                ans[idx] = stack.peek();
                stack.push(idx);
                idx++;
            }
        }
        for(int i = 1; i <= N; i++) sb.append(ans[i]).append(" ");
        System.out.println(sb);
    }
}
