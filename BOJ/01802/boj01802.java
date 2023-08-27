import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static String paper;
    static boolean divideConquer(int left, int right){
        if(left == right) return true;
        int mid = (left + right) / 2;
        for(int i = left, j = right; i < mid; i++, j--){
            if(paper.charAt(i) == paper.charAt(j)) return false;
        }
        return divideConquer(left, mid - 1) || divideConquer(mid + 1, right);
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            paper = br.readLine();
            sb.append(divideConquer(0, paper.length() - 1) ? "YES" : "NO").append('\n');
        }
        System.out.println(sb);
    }
}