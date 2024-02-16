import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static long arr[], segmentTree[];
    static long init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left];
        int mid = (left + right) / 2;
        return segmentTree[node] = Math.max(init(left, mid, node * 2), init(mid + 1, right , node * 2 + 1));
    }
    static long query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return Math.max(query(left, mid, node * 2, start, end), query(mid + 1, right, node * 2 + 1, start, end));
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        arr = new long[N + 1];
        segmentTree = new long[1 << (long)Math.ceil(Math.log(N)/ Math.log(2) + 1)];

        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        init(1, N, 1);

        for(int i = M; i <= N - M + 1; i++){
            sb.append(query(1, N, 1, i - M + 1, i + M - 1)).append(" ");
        }
        System.out.println(sb);
    }
}