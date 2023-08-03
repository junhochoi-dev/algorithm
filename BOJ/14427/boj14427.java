import java.io.*;
import java.util.*;

public class Main{
    static int N, M;
    static int[] arr, segmentTree;

    static int init(int left, int right, int node){
        if(left == right) return segmentTree[node] = left;
        int mid = (left + right) / 2;
        int leftindex = init(left, mid, node * 2);
        int rightindex = init(mid + 1, right, node * 2 + 1);
        if(arr[leftindex] < arr[rightindex]) return segmentTree[node] = leftindex;
        else if(arr[leftindex] > arr[rightindex]) return segmentTree[node] = rightindex;
        else return segmentTree[node] = Math.min(leftindex, rightindex);
    }

    static int query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        int leftindex = init(left, mid, node * 2);
        int rightindex = init(mid + 1, right, node * 2 + 1);
        if(arr[leftindex] < arr[rightindex]) return segmentTree[node] = leftindex;
        else if(arr[leftindex] > arr[rightindex]) return segmentTree[node] = rightindex;
        else return segmentTree[node] = Math.min(leftindex, rightindex);
    }

    static int update(int left, int right, int node, int index){
        if(index < left || right < index) return segmentTree[node];
        if(left == index && index == right) return index;
        int mid = (left + right) / 2;
        int leftindex = update(left, mid, node * 2, index);
        int rightindex = update(mid + 1, right, node * 2 + 1, index);
        if(arr[leftindex] < arr[rightindex]) return segmentTree[node] = leftindex;
        else if(arr[leftindex] > arr[rightindex]) return segmentTree[node] = rightindex;
        else return segmentTree[node] = Math.min(leftindex, rightindex);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;
        N = Integer.parseInt(br.readLine());
        arr = new int[N + 1];
        arr[0] = Integer.MAX_VALUE;
        segmentTree = new int[1 << ((int)Math.ceil(Math.log(N)/Math.log(2)) + 1)];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }
        init(1, N, 1);
        M = Integer.parseInt(br.readLine());
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int q = Integer.parseInt(st.nextToken());
            if(q == 1) {
                int index = Integer.parseInt(st.nextToken());
                int value = Integer.parseInt(st.nextToken());
                arr[index] = value;
                update(1, N, 1, index);
            }
            if(q == 2) sb.append(query(1, N, 1, 1, N)).append('\n');
        }
        System.out.println(sb);
    }
}