import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, Q;
    static long arr[], segmentTree[];
    static long init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left];
        int mid = (left + right) / 2;
        return segmentTree[node] = init(left, mid, node * 2) + init(mid + 1, right, node * 2 + 1);
    }
    static long query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return query(left, mid, node * 2, start, end) + query(mid + 1, right, node * 2 + 1, start, end);
    }
    static long update(int left, int right, int node, int idx){
        if(idx < left || right < idx) return segmentTree[node];
        if(left == idx && idx == right) return segmentTree[node] = arr[idx];
        int mid = (left + right) / 2;
        return segmentTree[node] = update(left, mid, node * 2, idx) + update(mid + 1, right, node * 2 + 1, idx);
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        Q = Integer.parseInt(st.nextToken());

        arr = new long[N + 1];
        segmentTree = new long[1 << (int)Math.ceil(Math.log(N)/Math.log(2) + 1)];

        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Long.parseLong(st.nextToken());
        }

        init(1, N, 1);

        for(int i = 0; i < Q; i++){
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            sb.append(query(1, N, 1, Math.min(x, y), Math.max(x, y))).append('\n');

            int idx = Integer.parseInt(st.nextToken());
            long val = Long.parseLong(st.nextToken());
            arr[idx] = val;
            update(1, N, 1, idx);
        }
        System.out.println(sb);
    }
}