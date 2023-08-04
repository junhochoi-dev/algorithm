import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N;

    static int[] sequence;
    static Set<Integer> visited = new HashSet<Integer>();
    static void next_permutation(int n, int index){
        sequence[index] = n;
        if(index == N){
            for(int i = 1; i <= N; i++) sb.append(sequence[i]).append(" ");
            sb.append("\n");
            return;
        }
        for(int i = 1; i <= N; i++){
            if(visited.contains(i)) continue;
            visited.add(i);
            next_permutation(i, index + 1);
            visited.remove(i);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        sequence = new int[N + 1];
        for(int i = 1; i <= N; i++){
            visited.add(i);
            next_permutation(i, 1);
            visited.remove(i);
        }
        System.out.println(sb);
    }
}