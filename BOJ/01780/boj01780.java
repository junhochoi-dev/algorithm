import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int[] answer = new int[4];
    static int[][] arr;
    static int divide_conquer(int x, int y, int size){
        if(size == 1) return arr[x][y] + 1;
        size /= 3;
        int[] dxy = {0, size, size * 2};
        int[] group = new int[4];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int part = divide_conquer(x + dxy[i], y + dxy[j], size);
                group[part]++;
            }
        }
        if(group[0] == 9) return 0;
        if(group[1] == 9) return 1;
        if(group[2] == 9) return 2;
        for (int i = 0; i < 3; i++) answer[i] += group[i];
        return 3;
    }
    public static void main(String[] args) throws Exception {

        int N = Integer.parseInt(br.readLine());
        arr = new int[N][N];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < N; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        answer[divide_conquer(0, 0, N)]++;
        for(int i = 0; i < 3; i++){
            System.out.println(answer[i]);
        }
    }
}
