import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, M;
    static int[] polaroid;
    static boolean[] segmentTree;

    static boolean init(int left, int right, int node){
        if(left == right) return segmentTree[node] = true;
        int mid = (left + right) / 2;
        boolean leftTree = init(left, mid, node * 2);
        boolean rightTree = init(mid + 1, right,node * 2 + 1);
        return segmentTree[node] = (leftTree && rightTree)
                && !((polaroid[mid] + polaroid[mid + 1]) % 2 == 0 && polaroid[mid] != polaroid[mid + 1]);
    }

    static boolean query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return true;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        boolean leftTree = query(left, mid, node * 2, start, end);
        boolean rightTree = query(mid + 1, right, node * 2 + 1, start, end);
        if(mid < start) return rightTree;
        if(end < mid + 1) return leftTree;
        return (leftTree && rightTree)
                && !((polaroid[mid] + polaroid[mid + 1]) % 2 == 0 && polaroid[mid] != polaroid[mid + 1]);
    }

    static boolean update(int left, int right, int node, int idx){
        if(left == idx && idx == right) return true;
        if(idx < left || right < idx) return segmentTree[node];
        int mid = (left + right) / 2;
        boolean leftTree = update(left, mid, node * 2, idx);
        boolean rightTree = update(mid + 1, right, node * 2 + 1, idx);
        return segmentTree[node] = (leftTree && rightTree)
                && !((polaroid[mid] + polaroid[mid + 1]) % 2 == 0 && polaroid[mid] != polaroid[mid + 1]);
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        polaroid = new int[N + 1];
        segmentTree = new boolean[1 << (int)(Math.ceil(Math.log(N)/Math.log(2) + 1))];

        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++) polaroid[i] = Integer.parseInt(st.nextToken()) % 4;

        init(1, N, 1);

        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int q = Integer.parseInt(st.nextToken());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            if(q == 1) {
                polaroid[a] = b % 4;
                update(1, N, 1, a);
            }
            if(q == 2) sb.append(query(1, N, 1, a, b) ? 1 : 0).append('\n');
        }

        System.out.println(sb);
    }
}
