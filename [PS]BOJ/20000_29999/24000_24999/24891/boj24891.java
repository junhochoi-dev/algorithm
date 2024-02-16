import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static boolean answer = false;
    static int L, N;
    static String arr[];
    static int sequence[];
    static boolean visited[];
    static void backtracking(int std){
        if(answer) return;
        if(std == L){
            boolean able = true;
            for(int i = 0; i < L; i++){
                for(int j = 0; j < L; j++){
                    if(i == j) continue;
                    if(arr[sequence[i]].charAt(j) != arr[sequence[j]].charAt(i)) able = false;
                    if(!able) break;
                }
                if(!able) break;
            }
            if(able){
                answer = true;
                for(int i = 0; i < L; i++){
                    sb.append(arr[sequence[i]]).append('\n');
                }
            }
            return;
        }
        for(int i = 0; i < N; i++){
            if(visited[i]) continue;
            visited[i] = true;
            sequence[std] = i;
            backtracking(std + 1);
            visited[i] = false;
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        L = Integer.parseInt(st.nextToken());
        N = Integer.parseInt(st.nextToken());

        arr = new String[N];
        sequence = new int[L];
        visited = new boolean[N];
        for(int i = 0; i < N; i++){
            arr[i] = br.readLine();
        }

        Arrays.sort(arr);

        backtracking(0);

        System.out.println(answer ? sb : "NONE");
    }
}