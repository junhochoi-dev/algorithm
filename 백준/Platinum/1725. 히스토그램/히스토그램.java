import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, answer = Integer.MIN_VALUE;
    static int[] arr, segmentTree;
    static int init(int left, int right, int node){
        if(left == right) return segmentTree[node] = left;
        int mid = (left + right) / 2;
        int leftindex = init(left, mid, node * 2);
        int rightindex = init(mid + 1, right, node * 2 + 1);
        return segmentTree[node] = arr[leftindex] > arr[rightindex] ? rightindex : leftindex;
    }
    static int query(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segmentTree[node];
        int mid = (left + right) / 2;
        int leftindex = query(left, mid, node * 2, start, end);
        int rightindex = query(mid + 1, right, node * 2 + 1, start, end);
        return arr[leftindex] > arr[rightindex] ? rightindex : leftindex;
    }

    static void findMax(int left, int right){
        int index = query(1, N, 1, left, right);
        answer = Math.max(answer, arr[index] * (right - left + 1));
        if(left == right) return;
        if(index - 1 >= left) findMax(left, index - 1);
        if(index + 1 <= right) findMax(index + 1, right);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        N = Integer.parseInt(br.readLine());
        arr = new int[N + 1];
        arr[0] = Integer.MAX_VALUE;
        segmentTree = new int[1 << ((int)(Math.ceil(Math.log(N)/Math.log(2))) + 1)];
        for(int i = 1; i <= N; i++) arr[i] = Integer.parseInt(br.readLine());

        init(1, N, 1);

        findMax(1, N);

        System.out.println(answer);
    }
}
