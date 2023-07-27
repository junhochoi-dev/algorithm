import java.io.*;
import java.util.*;

public class Main {
    static int N;
    static String ans;
    static char[][] arr;
    public static String quadtree(int x, int y, int l){
        if(l == 1) return arr[x][y] == '0' ? "0" : "1";
        l /= 2;
        String quad1 = quadtree(x, y, l);
        String quad2 = quadtree(x, y + l, l);
        String quad3 = quadtree(x + l, y, l);
        String quad4 = quadtree(x + l, y + l, l);
        String sumstr = quad1 + quad2 + quad3 + quad4;
        if(sumstr.length() == 4){
            if("0000".equals(sumstr)) return "0";
            else if("1111".equals(sumstr)) return "1";
            else return "(" + sumstr + ")";
        }
        else return "(" + sumstr + ")";
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        arr = new char[N][N];
        for(int i = 0; i < N; i++){
            String tmp = br.readLine();
            for(int j = 0; j < N; j++){
                arr[i][j] = tmp.charAt(j);
            }
        }
        System.out.println(quadtree(0, 0, N));
    }
}
