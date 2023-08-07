import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        for(int t = 1; t <= 10; t++){
            int N = Integer.parseInt(br.readLine());
            Deque<String> deque = new LinkedList<>();
            st = new StringTokenizer(br.readLine());
            String[] arr = new String[10];
            for(int i = 0; i < N; i++){
                if(i < 10) deque.addLast(st.nextToken());
                else st.nextToken();
            }

            int M = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());

            for(int i = 0; i < M; i++){
                String order = st.nextToken();
                int start = Integer.parseInt(st.nextToken());
                int size = Integer.parseInt(st.nextToken());
                if(0 <= start && start < 10){
                    Deque<String> temp = new LinkedList<String>();
                    int originsize = deque.size();
                    for(int j = 0; j < originsize - start; j++){
                        temp.addFirst(deque.pollLast());
                    }
                    for(int j = 0; j < size; j++){
                        if(deque.size() <= 10) deque.addLast(st.nextToken());
                        else st.nextToken();
                    }
                    originsize = temp.size();
                    for(int j = 0; j < originsize; j++){
                        if(deque.size() <= 10) deque.addLast(temp.pollFirst());
                    }
                }
                else for(int j = 0; j < size; j++) st.nextToken();
            }
            sb.append("#").append(t).append(" ");
            for(int i = 0; i < 10; i++) sb.append(deque.pollFirst()).append(" ");
            sb.append('\n');
        }
        System.out.println(sb);
    }
}