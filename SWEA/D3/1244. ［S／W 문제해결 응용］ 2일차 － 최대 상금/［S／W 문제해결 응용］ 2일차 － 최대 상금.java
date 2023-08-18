import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    static int std, size, maximum;
    static int[] numlist;
    static ArrayList<HashSet<Integer>> visited;
    static int arrToNum(){
        int sum = 0;
        for(int k = 0; k < size; k++){
            sum *= 10;
            sum += numlist[k];
        }
        return sum;
    }
    static void DFS(int cnt){
        if(cnt == std){
            maximum = Math.max(maximum, arrToNum());
            return;
        }
        for(int i = 0; i < size - 1; i++){
            for(int j = i + 1; j < size; j++){
                int temp = numlist[i];
                numlist[i] = numlist[j];
                numlist[j] = temp;
                int next = arrToNum();
                if(!visited.get(cnt + 1).contains(next)){
                    visited.get(cnt + 1).add(next);
                    DFS(cnt + 1);
                }
                temp = numlist[i];
                numlist[i] = numlist[j];
                numlist[j] = temp;
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            st = new StringTokenizer(br.readLine());
            String tmp = st.nextToken();
            size = tmp.length();
            numlist = new int[size];
            for(int i = 0; i < size; i++) numlist[i] = tmp.charAt(i) - '0';
            std = Integer.parseInt(st.nextToken());
            visited = new ArrayList<HashSet<Integer>>();
            for(int j = 0; j <= 10; j++) visited.add(new HashSet<Integer>());
            maximum = Integer.MIN_VALUE;
            DFS(0);
            sb.append("#").append(t).append(" ").append(maximum).append('\n');
        }
        System.out.println(sb);
    }
}