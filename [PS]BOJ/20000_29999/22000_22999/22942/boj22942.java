import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class DOT implements Comparable<DOT>{
        int x;
        int num;
        boolean start;
        DOT(int x, int num, boolean start){
            this.x = x;
            this.num = num;
            this.start = start;
        }
        @Override
        public int compareTo(DOT o) {
            return Integer.compare(this.x, o.x);
        }
    }
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        ArrayList<DOT> arr = new ArrayList<DOT>();
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int r = Integer.parseInt(st.nextToken());
            arr.add(new DOT(x - r, i, true));
            arr.add(new DOT(x + r, i, false));
        }

        arr.sort(null);

        boolean answer = true;

        Stack<DOT> stack = new Stack<DOT>();
        for(int i = 0; i < N * 2; i++){
            if(i != 0 && arr.get(i - 1).x == arr.get(i).x) {
                answer = false;
                break;
            }
            if(stack.empty()) stack.add(arr.get(i));
            else{
                if(arr.get(i).start) stack.add(arr.get(i));
                else{
                    if(stack.peek().num == arr.get(i).num) stack.pop();
                    else break;
                }
            }
        }
        System.out.println(stack.empty() && answer? "YES" : "NO");
    }
}