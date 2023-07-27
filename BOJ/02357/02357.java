import java.io.*;
import java.util.*;

public class Main {
    static int[] arr;
    static int[] segtreemin;
    static int[] segtreemax;
    public static int initmin(int left, int right, int node){
        if(left == right) return segtreemin[node] = arr[left];
        int mid = (left + right) / 2;
        return segtreemin[node] = Math.min(initmin(left, mid, node * 2), initmin(mid + 1, right, node * 2 + 1));
    }
    public static int querymin(int left, int right, int node, int start, int end){
        if(end < left || right < start) return Integer.MAX_VALUE;
        if(start <= left && right <= end) return segtreemin[node];
        int mid = (left + right) / 2;
        return Math.min(querymin(left, mid, node * 2, start, end), querymin(mid + 1, right, node * 2 + 1, start, end));
    }
    public static int initmax(int left, int right, int node){
        if(left == right) return segtreemax[node] = arr[left];
        int mid = (left + right) / 2;
        return segtreemax[node] = Math.max(initmax(left, mid, node * 2), initmax(mid + 1, right, node * 2 + 1));
    }
    public static int querymax(int left, int right, int node, int start, int end){
        if(end < left || right < start) return 0;
        if(start <= left && right <= end) return segtreemax[node];
        int mid = (left + right) / 2;
        return Math.max(querymax(left, mid, node * 2, start, end), querymax(mid + 1, right, node * 2 + 1, start, end));
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        arr = new int[N + 1];
        segtreemin = new int[1 << (int)Math.ceil(Math.log(N)/Math.log(2)) + 1];
        segtreemax = new int[1 << (int)Math.ceil(Math.log(N)/Math.log(2)) + 1];
        for(int i = 1; i <= N; i++){
            arr[i] = Integer.parseInt(br.readLine());
        }
        initmin(1, N, 1);
        initmax(1, N, 1);
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            System.out.println(querymin(1, N, 1, a, b) + " " + querymax(1, N, 1, a, b));
        }
    }
}