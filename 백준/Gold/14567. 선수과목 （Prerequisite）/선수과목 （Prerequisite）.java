import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[] answer = new int[N + 1];
        int[] degree = new int[N + 1];
        HashMap<Integer, HashSet<Integer>> prerequisite = new HashMap<Integer, HashSet<Integer>>();
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            if(!prerequisite.containsKey(a)) prerequisite.put(a, new HashSet<Integer>());
            prerequisite.get(a).add(b);
            degree[b]++;
        }
        Queue<Integer> queue = new ArrayDeque<Integer>();
        int semesterCnt = 0;
        for(int i = 1; i <= N; i++){
            if(degree[i] == 0) {
                queue.add(i);
                semesterCnt++;
            }
        }
        int semester = 1;
        while(!queue.isEmpty()){
            int curr = queue.poll();
            answer[curr] = semester;
            if(prerequisite.containsKey(curr)){
                for(int next : prerequisite.get(curr)){
                    degree[next]--;
                    if(degree[next] == 0) queue.add(next);
                }
            }
            semesterCnt--;
            if(semesterCnt == 0){
                semesterCnt = queue.size();
                semester++;
            }
        }
        for(int i = 1; i <= N; i++) sb.append(answer[i]).append(" ");
        System.out.println(sb);
    }
}