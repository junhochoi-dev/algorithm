import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Character> stack;
        StringTokenizer st;
        for(int t = 1; t <= 10; t++){
            boolean good = true;
            stack = new Stack<Character>();
            int N = Integer.parseInt(br.readLine());
            String parenthesis = br.readLine();
            for(int i = 0; i < N; i++){
                char curr = parenthesis.charAt(i);
                if(stack.empty()){
                    stack.add(curr);
                    continue;
                }
                char top = stack.peek();
                if("([{<".contains(String.valueOf(curr))){
                    stack.add(curr);
                }
                else{ // ")]}>"
                    if(curr == ')'){
                        if(Math.abs(curr - top) == 1) stack.pop();
                        else good = false;
                    }
                    else{
                        if(Math.abs(curr - top) == 2) stack.pop();
                        else good = false;
                    }
                }
            }
            if(!stack.empty()) good = false;
            System.out.println("#" + t + " " + (good ? 1 : 0));
        }
    }
}
