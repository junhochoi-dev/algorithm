import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        Stack<Integer> stack = new Stack<>();
        int answer = 0;
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            while(!stack.isEmpty() && stack.peek() > y){
                answer++;
                stack.pop();
            }
            if(!stack.isEmpty() && stack.peek() == y) continue;
            stack.push(y);
        }
        while(!stack.isEmpty()){
            if(stack.peek() > 0) answer++;
            stack.pop();
        }
        System.out.println(answer);
    }
}