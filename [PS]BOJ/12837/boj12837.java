import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static long[] arr, segmentTree;

    static long query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return query(left, mid, node * 2, start, end)
                + query(mid + 1, right, node * 2 + 1, start, end);
    }

    static long update(int left, int right, int node, int idx){
        if(idx < left || right < idx) return segmentTree[node];
        if(left == idx && idx == right) return segmentTree[node] = arr[idx];
        int mid = (left + right) / 2;
        return segmentTree[node] = update(left, mid, node * 2, idx)
                + update(mid + 1, right, node * 2 + 1, idx);
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int Q = Integer.parseInt(st.nextToken());

        arr = new long[N + 1];
        segmentTree = new long[1 << ((int)Math.ceil(Math.log(N)/Math.log(2)) + 1)];

        for(int i = 0; i < Q; i++){
            st = new StringTokenizer(br.readLine());
            int query = Integer.parseInt(st.nextToken());
            int p = Integer.parseInt(st.nextToken());
            int q = Integer.parseInt(st.nextToken());

            if(query == 1) {
                arr[p] += q;
                update(1, N, 1, p);
            }
            if(query == 2) {
                sb.append(query(1, N, 1, p, q)).append('\n');
            }
        }

        System.out.println(sb);
    }
}
