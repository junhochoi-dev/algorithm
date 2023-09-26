import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        for(int t = 1; t <= 10; t++){
            int N = Integer.parseInt(br.readLine());
            LinkedList<String> arr = new LinkedList<String>();
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++) arr.add(st.nextToken());
            int M = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < M; i++) {
                String o = st.nextToken();
                if(o.equals("I")){
                    int x = Integer.parseInt(st.nextToken());
                    int y = Integer.parseInt(st.nextToken());
                    for(int j = 0; j < y; j++){
                        arr.add(x + j, st.nextToken());
                    }
                }
                if(o.equals("D")){
                    int x = Integer.parseInt(st.nextToken());
                    int y = Integer.parseInt(st.nextToken());
                    for(int j = 0; j < y; j++){
                        arr.remove(x);
                    }
                }
                if(o.equals("A")){
                    int x = Integer.parseInt(st.nextToken());
                    for(int j = 0; j < x; j++){
                        arr.add(st.nextToken());
                    }
                }
            }

            sb.append("#").append(t).append(" ");
            Iterator<String> iterator = arr.iterator();
            for(int i = 0; i < 10; i++){
                sb.append(iterator.next()).append(" ");
            }
            sb.append('\n');
        }
        System.out.println(sb);
    }
}
