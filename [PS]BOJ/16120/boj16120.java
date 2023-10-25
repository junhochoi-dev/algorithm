import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        String ppap = br.readLine();
        Stack<Character> stack = new Stack<Character>();

        boolean able = true;
        for(int i = 0; i < ppap.length(); i++){
            if(ppap.charAt(i) == 'P') stack.add('P');
            else {
                if(i + 1 < ppap.length()){
                    if(stack.size() < 2) {
                        able = false;
                        break;
                    }
                    char c1 = stack.pop();
                    if(c1 == 'P'){
                        char c2 = stack.peek();
                        if(c2 != 'P'){
                            able = false;
                            break;
                        }
                    } else {
                        able = false;
                        break;
                    }
                    if (ppap.charAt(i + 1) != 'P') {
                        able = false;
                        break;
                    }
                    i++;
                } else {
                    able = false;
                    break;
                }
            }
        }
        System.out.println(able && stack.size() == 1 ? "PPAP" : "NP");
    }
}