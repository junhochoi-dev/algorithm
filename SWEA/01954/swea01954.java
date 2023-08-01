import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            System.out.println("#" + t);
            int N = Integer.parseInt(br.readLine());
            int[][] arr = new int[N][N];
            int x = 0;
            int y = -1;
            int length = N;
            int index = 1;
            while(true){
                for(int i = 1; i <= length; i++){
                    y++;
                    arr[x][y] = index++;
                }
                if(--length == 0) break;
                for(int i = 1; i <= length; i++){
                    x++;
                    arr[x][y] = index++;
                }
                for(int i = 1; i <= length; i++){
                    y--;
                    arr[x][y] = index++;
                }
                if(--length == 0) break;
                for(int i = 1; i <= length; i++){
                    x--;
                    arr[x][y] = index++;
                }
            }
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    System.out.print(arr[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}
