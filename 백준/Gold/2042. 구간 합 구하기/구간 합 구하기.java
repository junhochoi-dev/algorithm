import java.io.*;
import java.util.*;
public class Main {
    static int N, M, K;
    static long[] arr;
    static long[] segmentTree;
    static public long init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left];
        int mid = (left + right) / 2;
        return segmentTree[node] = init(left, mid, node * 2) + init(mid + 1, right, node * 2 + 1);
    }
    static public long query(int left, int right, int node, int start, int end){
        if(left > end || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return query(left, mid, node * 2, start, end) + query(mid + 1, right, node * 2 + 1, start, end);
    }
    static public void update(int left, int right, int node, int idx, long diff){
        if(idx < left || idx > right) return;
        segmentTree[node] += diff;
        if(left == right) return;
        int mid = (left + right) / 2;
        update(left, mid, node * 2, idx, diff);
        update(mid + 1, right, node * 2 + 1, idx, diff);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        arr = new long[N + 1];
        segmentTree = new long[1 << ((int)Math.ceil((Math.log(N)/Math.log(2))) + 1)];
        for(int i = 1; i <= N; i++){
            arr[i] = Long.parseLong(br.readLine());
        }
        init(1, N, 1);
        for(int i = 0; i < M + K; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            if(a == 1){
                int b = Integer.parseInt(st.nextToken());
                long c = Long.parseLong(st.nextToken());
                update(1, N, 1, b, c - arr[b]);
                arr[b] = c;
            }
            else{
                int b = Integer.parseInt(st.nextToken());
                int c = Integer.parseInt(st.nextToken());
                System.out.println(query(1, N, 1, b, c));
            }
        }
    }
}