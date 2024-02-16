import java.io.*;
import java.util.*;
public class Main {
    static int N, M;
    static int[] arr;
    static int[] segmentTree;

    static int init(int left, int right, int node){
        if(left == right) return segmentTree[node] = arr[left];
        int mid = (left + right) / 2;
        return segmentTree[node] = Math.min(init(left, mid, node * 2), init(mid + 1, right, node * 2 + 1));
    }

    static int query(int left, int right, int node, int start, int end){
        if(left > end || right < start) return Integer.MAX_VALUE;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        return Math.min(query(left, mid, node * 2, start, end), query(mid + 1, right, node * 2 + 1, start, end));
    }

    static int update(int left, int right, int node, int index, int value){
        if(index < left || right < index) return segmentTree[node];
        if(left == index && index == right) return segmentTree[node] = value;
        int mid = (left + right) / 2;
        return segmentTree[node] = Math.min(update(left, mid, node * 2, index, value), update(mid + 1, right, node * 2 + 1, index, value));
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        arr = new int[N + 1];
        segmentTree = new int[1 << ((int)(Math.ceil(Math.log(N)/Math.log(2))) + 1)];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }
        init(1, N, 1);
        M = Integer.parseInt(br.readLine());
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int q = Integer.parseInt(st.nextToken());
            if(q == 1){
                int index = Integer.parseInt(st.nextToken());
                int value = Integer.parseInt(st.nextToken());
                update(1, N, 1, index, value);
                arr[index] = value;
            }
            else{
                int s = Integer.parseInt(st.nextToken());
                int e= Integer.parseInt(st.nextToken());
                System.out.println(query(1, N, 1, s, e));
            }
        }
    }
}