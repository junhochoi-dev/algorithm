import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] arr, segmentTree;
    static int init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left];
        int mid = (left + right) / 2;
        return segmentTree[node] = init(left, mid, node * 2) + init(mid + 1, right, node * 2 + 1);
    }
    static int query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return query(left, mid, node * 2, start, end) + query(mid + 1, right,node * 2 + 1, start, end);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        arr = new int[N + 1];
        segmentTree = new int[1 << ((int)Math.ceil(Math.log(N)/Math.log(2)) + 1)];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }
        init(1, N, 1);
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            sb.append(query(1, N, 1, s, e)).append('\n');
        }
        System.out.println(sb);
    }
}