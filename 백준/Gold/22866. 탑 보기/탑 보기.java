import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class BUILDING{
        int height;
        int index;

        public BUILDING(int height, int index) {
            this.height = height;
            this.index = index;
        }
    }

    public static void main(String[] args) throws IOException {

        int N = Integer.parseInt(br.readLine());

        int[] cnt = new int[N + 1];
        int[] idx = new int[N + 1];
        int[] arr = new int[N + 1];

        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
            idx[i] = Integer.MAX_VALUE;
        }

        Stack<BUILDING> l = new Stack<>();
        Stack<BUILDING> r = new Stack<>();

        for(int i = 1, j = N; i <= N; i++, j--){
            // left
            while(!l.isEmpty()){
                if(arr[i] >= l.peek().height){
                    l.pop();
                } else {
                    break;
                }
            }
            cnt[i] += l.size();
            if(!l.isEmpty()){
                if(Math.abs(i - l.peek().index) < Math.abs(i - idx[i])){
                    idx[i] = l.peek().index;
                } else if(Math.abs(i - l.peek().index) == Math.abs(i - idx[i])){
                    if(l.peek().index < idx[i]){
                        idx[i] = l.peek().index;
                    }
                }
            }
            l.add(new BUILDING(arr[i], i));

            // right
            while(!r.isEmpty()){
                if(arr[j] >= r.peek().height){
                    r.pop();
                } else {
                    break;
                }
            }
            cnt[j] += r.size();
            if(!r.isEmpty()){
                if(Math.abs(j - r.peek().index) < Math.abs(j - idx[j])){
                    idx[j] = r.peek().index;
                } else if(Math.abs(j - r.peek().index) == Math.abs(j - idx[j])){
                    if(r.peek().index < idx[j]){
                        idx[j] = r.peek().index;
                    }
                }
            }
            r.add(new BUILDING(arr[j], j));
        }

        for(int i = 1; i <= N; i++){
            sb.append(cnt[i]);
            if(cnt[i] != 0){
                sb.append(" ").append(idx[i]);
            }
            sb.append('\n');
        }
        System.out.println(sb);
    }
}