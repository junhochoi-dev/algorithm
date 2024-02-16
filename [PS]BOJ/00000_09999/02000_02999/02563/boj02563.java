import java.io.*;
import java.util.*;
import java.util.concurrent.LinkedBlockingQueue;

public class Main{
    StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int[][] arr = new int[100 + 1][100 + 1];
        int N = Integer.parseInt(br.readLine());
        int sum = 0;
        for(int t = 0; t < N; t++){
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            for(int i = x; i < x + 10; i++){
                for(int j = y; j < y + 10; j++){
                    arr[i][j] = 1;
                }
            }
        }
        for(int i = 1; i < 100 + 1; i++){
            for(int j = 1; j < 100 + 1; j++){
                sum += arr[i][j];
            }
        }
        System.out.println(sum);
    }
}
