import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] arr, segmentTree;
    static int init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left] % 2 == 0 ? 1 : 0;
        int mid = (left + right) / 2;
        return segmentTree[node] = init(left, mid, node * 2) + init(mid + 1, right, node * 2 + 1);
    }
    static int query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return query(left, mid, node * 2, start, end) + query(mid + 1, right, node * 2 + 1, start, end);
    }
    static int update(int left, int right, int node, int index){
        if(index < left || right < index) return segmentTree[node];
        if(left == index && index == right) return segmentTree[node] = arr[left] % 2 == 0 ? 1 : 0;
        int mid = (left + right) / 2;
        return segmentTree[node] = update(left, mid, node * 2, index) + update(mid + 1, right, node * 2 + 1, index);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        N = Integer.parseInt(br.readLine());
        arr = new int[N + 1];
        segmentTree = new int[1 << ((int)(Math.ceil(Math.log(N)/Math.log(2))) + 1)];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++) arr[i] = Integer.parseInt(st.nextToken());
        init(1, N, 1);
        M = Integer.parseInt(br.readLine());
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int o = Integer.parseInt(st.nextToken());
            if(o == 1){
                int index = Integer.parseInt(st.nextToken());
                int value = Integer.parseInt(st.nextToken());
                arr[index] = value;
                update(1, N, 1, index);
            }
            if(o == 2){
                int left = Integer.parseInt(st.nextToken());
                int right = Integer.parseInt(st.nextToken());
                sb.append(query(1, N, 1, left, right)).append('\n');
            }
            if(o == 3){
                int left = Integer.parseInt(st.nextToken());
                int right = Integer.parseInt(st.nextToken());
                sb.append(right - left + 1 - query(1, N, 1, left, right)).append('\n');
            }
        }
        System.out.println(sb);
    }
}
