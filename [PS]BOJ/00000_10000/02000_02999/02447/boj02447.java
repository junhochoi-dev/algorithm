import java.io.*;
import java.util.*;

public class Main {
    static char[][] arr;

    static void star(int x, int y, int l, boolean nostar){
        if(l == 1){
            arr[x][y] = nostar ? ' ' : '*';
            return;
        }
        l /= 3;
        int[] dxy = {0, l, 2 * l};
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int nx = x + dxy[i];
                int ny = y + dxy[j];
                if(nostar) continue;
                star(nx, ny, l, i == 1 && j == 1 || nostar);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        arr = new char[N][N];
        star(0, 0, N, false);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++) {
                bw.write((arr[i][j] == '\0' ? ' ' : arr[i][j]));
            }
            bw.write('\n');
        }
        bw.flush();
    }
}
