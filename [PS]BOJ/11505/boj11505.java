import java.io.*;
import java.util.*;
public class Main {
    final static long MOD = 1_000_000_007;
    static int N, M, K;
    static long[] arr;
    static long[] segmentTree;
    static public long init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left] % MOD;
        int mid = (left + right) / 2;
        return segmentTree[node] = (init(left, mid, node * 2) * init(mid + 1, right, node * 2 + 1)) % MOD;
    }
    static public long query(int left, int right, int node, int start, int end){
        if(left > end || right < start) return 1;
        if(start <= left && right <= end) return segmentTree[node] % MOD;
        int mid = (left + right) / 2;
        return (query(left, mid, node * 2, start, end) * query(mid + 1, right, node * 2 + 1, start, end)) % MOD;
    }
    static public long update(int left, int right, int node, int index, long change){
        if(index < left || right < index) return segmentTree[node];
        if(left == index && right == index) return segmentTree[node] = change;
        int mid = (left + right) / 2;
        return segmentTree[node] = (update(left, mid, node * 2, index, change) * update(mid + 1, right, node * 2 + 1, index, change)) % MOD;
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
                int index = Integer.parseInt(st.nextToken());
                long origin = arr[index];
                long change = Long.parseLong(st.nextToken());
                update(1, N, 1, index, change);
            }
            else{
                int start = Integer.parseInt(st.nextToken());
                int end = Integer.parseInt(st.nextToken());
                System.out.println(query(1, N, 1, start, end));
            }
        }
    }
}