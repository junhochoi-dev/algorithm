import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Queue<Integer> queue = new LinkedList<Integer>();
        int N = Integer.parseInt(br.readLine());
        for(int i = 1; i <= N; i++){
            queue.add(i);
        }
        while(queue.size() > 1){
            queue.poll();
            int front = queue.poll();
            queue.add(front);
        }
        System.out.println(queue.poll());
    }
}