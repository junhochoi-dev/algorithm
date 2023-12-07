import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;


    static int N;
    static int[] degree, thief, police;
    static ArrayList<ArrayList<Integer>> edge = new ArrayList<ArrayList<Integer>>();

    static void DFS(boolean isPolice, int curr){
        for(int next : edge.get(curr)){
            if(isPolice){
                if(police[next] > police[curr] + 1){
                    police[next] = police[curr] + 1;
                    DFS(true, next);
                }
            } else {
                if(thief[next] > thief[curr] + 1){
                    thief[next] = thief[curr] + 1;
                    DFS(false, next);
                }
            }
        }
    }
    public static void main(String[] args) throws IOException {
        N = Integer.parseInt(br.readLine());
        degree = new int[N + 1];

        thief = new int[N + 1];
        police = new int[N + 1];

        for(int i = 0; i <= N; i++){
            edge.add(new ArrayList<Integer>());
            thief[i] = Integer.MAX_VALUE;
            police[i] = Integer.MAX_VALUE;
        }

        for(int i = 0; i < N - 1; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            degree[s]++; degree[e]++;
            edge.get(s).add(e);
            edge.get(e).add(s);
        }

        st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());
        thief[a] = police[b] = police[c] = 0;
        DFS(false, a);
        DFS(true, b);
        DFS(true, c);

        boolean answer = false;
        for(int i = 1; i <= N; i++){
            if(degree[i] == 1 && thief[i] < police[i]) {
                answer = true;
                break;
            }
        }
        System.out.println(answer ? "YES" : "NO");
    }
}
