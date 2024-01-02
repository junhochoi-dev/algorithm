import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        boolean[][] seat = new boolean[10][20];

        int N = Integer.parseInt(br.readLine());
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            int row = (int)temp.charAt(0) - (int)'A';
            int col = Integer.parseInt(temp.substring(1)) - 1;
            seat[row][col] = true;
        }

        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 20; j++){
                System.out.print(seat[i][j] ? 'o' : '.');
            }
            System.out.println();
        }
    }
}
