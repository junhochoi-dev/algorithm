import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] arr, mintree, maxtree;

    static int init(int left, int right, int node, boolean minmax){
        if(left == right){
            if(minmax) return mintree[node] = arr[left];
            else return maxtree[node] = arr[left];
        }
        int mid = (left + right) / 2;
        int leftvalue = init(left, mid, node * 2, minmax);
        int rightvalue = init(mid + 1, right, node * 2 + 1, minmax);
        if(minmax) return mintree[node] = Math.min(leftvalue, rightvalue);
        else return maxtree[node] = Math.max(leftvalue, rightvalue);
    }
    static int query(int left, int right, int node, int start, int end, boolean minmax){
        if(end < left || right < start) {
            if(minmax) return Integer.MAX_VALUE;
            else return Integer.MIN_VALUE;
        }
        if(start <= left && right <= end) {
            if(minmax) return mintree[node];
            else return maxtree[node];
        }
        int mid = (left + right) / 2;
        int leftvalue = query(left, mid, node * 2, start, end, minmax);
        int rightvalue = query(mid + 1, right, node * 2 + 1, start, end, minmax);
        if(minmax) return Math.min(leftvalue, rightvalue);
        else return Math.max(leftvalue, rightvalue);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        arr = new int[N + 1];
        for(int i = 1; i <= N; i++) arr[i] = Integer.parseInt(br.readLine());
        mintree = new int[1 << ((int)(Math.ceil(Math.log(N)/Math.log(2))) + 1)];
        maxtree = new int[1 << ((int)(Math.ceil(Math.log(N)/Math.log(2))) + 1)];
        init(1, N, 1, true);
        init(1, N, 1, false);
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            sb.append(query(1, N, 1, a, b, false) - query(1, N, 1, a, b, true)).append('\n');
        }
        System.out.println(sb);
    }
}
