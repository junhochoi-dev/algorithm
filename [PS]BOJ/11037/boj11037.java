import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static boolean[] visited = new boolean[10];
    static ArrayList<Integer> arr = new ArrayList<Integer>();
    static void uniqueGen(int num, int size){
        if(num != 0) arr.add(num);
        if (size == 9) return;
        for(int i = 1; i <= 9; i++) {
            if(visited[i]) continue;
            visited[i] = true;
            uniqueGen(num * 10 + i, size + 1);
            visited[i] = false;
        }
    }
    public static void main(String[] args) throws IOException {
        uniqueGen(0, 0);

        arr.sort(null);

        String input;
        while((input = br.readLine()) != null){
            int N = Integer.parseInt(input);

            int answer = Integer.MAX_VALUE;
            int low = 0;
            int high = arr.size() - 1;
            while(low <= high){
                int mid = (low + high) / 2;
                if(N < arr.get(mid)){
                    high = mid - 1;
                    answer = Math.min(answer, arr.get(mid));
                } else {
                    low = mid + 1;
                }
            }

            sb.append(answer == Integer.MAX_VALUE ? 0 : answer).append('\n');
        }
        System.out.println(sb);
    }
}