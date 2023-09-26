import java.util.*;

public class Main {
    public static int[] arr;
    public static int[] segtree;
    public static int init(int left, int right, int node){
        if(left == right) return segtree[node] = arr[left];
        int mid = (left + right) / 2;
        return segtree[node] = Math.min(init(left, mid, node * 2), init(mid + 1, right, node * 2 + 1));
    }
    public static int query(int left, int right, int node, int start, int end){
        if(end<left || right<start) return Integer.MAX_VALUE;
        if(start <= left && right <= end) return segtree[node];
        int mid = (left + right) / 2;
        return Math.min(query(left, mid, node * 2, start, end), query(mid + 1, right, node * 2 + 1, start, end));
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();

        arr = new int[N + 1];
        for(int i = 1; i <= N; i++){
            arr[i] = scanner.nextInt();
        }

        int maxsize = 1 << (int)Math.ceil(Math.log(N)/Math.log(2));
        int nodesize = maxsize * 2;
        segtree = new int[nodesize];

        init(1, N, 1);
        for(int i = 0; i < M; i++){
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            System.out.println(query(1, N, 1, a, b));
        }

        scanner.close();
    }
}