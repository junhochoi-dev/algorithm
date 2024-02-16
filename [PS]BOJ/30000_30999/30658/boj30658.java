import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        while(true){
            int N = Integer.parseInt(br.readLine());
            if(N == 0) break;

            Stack<Integer> stack = new Stack<>();
            for(int i = 0; i < N; i++){
                stack.push(Integer.parseInt(br.readLine()));
            }
            while(!stack.isEmpty()){
                sb.append(stack.pop()).append('\n');
            }
            sb.append(0).append('\n');
        }
        System.out.println(sb);
    }
}
