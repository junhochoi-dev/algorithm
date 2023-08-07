import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static String[][] arr;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static Set<String> list = new HashSet<String>();
    static void DFS(int x, int y, String prev){
        String curr = arr[x][y];
        if((prev + curr).length() == 6) {
            list.add(prev + curr);
            return;
        }
        for(int k = 0; k < 4; k++){
            int tx = x + dx[k];
            int ty = y + dy[k];
            if(tx < 0 || ty < 0 || tx >= 5 || ty >= 5) continue;
            DFS(tx, ty, prev + curr);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        arr = new String[5][5];
        for(int i = 0; i < 5; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < 5; j++){
                arr[i][j] = st.nextToken();
            }
        }
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                DFS(i, j, "");
            }
        }
        System.out.println(list.size());
    }
}