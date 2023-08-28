import java.io.*;
import java.net.Inet4Address;
import java.util.*;

public class Solution{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N;
    static char[] value;
    static HashMap<Integer, Node> Tree;
    static class Node{
        int left, right;
        public Node(int left, int right) {
            this.left = left;
            this.right = right;
        }
    }
    static void inorder(int curr){
        if(Tree.get(curr).left != -1) inorder(Tree.get(curr).left);
        sb.append(value[curr]);
        if(Tree.get(curr).right != -1) inorder(Tree.get(curr).right);
    }
    public static void main(String[] args) throws IOException {
        for(int t = 1; t <= 10; t++){
            sb.append("#").append(t).append(" ");
            N = Integer.parseInt(br.readLine());
            value = new char[N + 1];
            Tree = new HashMap<Integer, Node>();
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                int curr = Integer.parseInt(st.nextToken());
                value[curr] = st.nextToken().charAt(0);
                int left = -1, right = -1;
                if(st.hasMoreTokens()) left = Integer.parseInt(st.nextToken());
                if(st.hasMoreTokens()) right = Integer.parseInt(st.nextToken());
                Tree.put(curr, new Node(left, right));
            }
            inorder(1);
            sb.append('\n');
        }
        System.out.println(sb);
    }
}