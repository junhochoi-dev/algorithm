import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int INF = Integer.MAX_VALUE;

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        int[][] loc = new int[2][N];
        for(int i = 0; i < 2; i++){
            String temp = br.readLine();
            for(int j = 0; j < N; j++){
                if(temp.charAt(j) == '1') loc[i][j] = INF;
                if(temp.charAt(j) == '0') loc[i][j] = -1;
            }
        }

        boolean answer = false;

        Queue<Integer> queue = new ArrayDeque<>();
        loc[0][0] = 0;
        queue.add(0);
        while(!queue.isEmpty()){
            if(answer) break;

            int curr = queue.poll();
            int x = curr / N;
            int y = curr % N;

            // 앞으로 한칸
            if(y + 1 >= N) answer = true;
            else {
                if(loc[x][y + 1] != -1){
                    if(loc[x][y + 1] > loc[x][y] + 1){
                        loc[x][y + 1] = loc[x][y] + 1;
                        queue.add(x * N + y + 1);
                    }
                }
            }

            // 뒤로 한칸
            if(y - 1 >= 0){
                if(loc[x][y - 1] != -1){
                    if(y > loc[x][y] + 1){
                        if(loc[x][y - 1] > loc[x][y] + 1){
                            loc[x][y - 1] = loc[x][y] + 1;
                            queue.add(x * N + y - 1);
                        }
                    }
                }
            }

            // 다음줄 K 칸
            if(y + K >= N) answer = true;
            else {
                if(loc[Math.abs(x - 1)][y + K] != -1){
                    if(loc[Math.abs(x - 1)][y + K] > loc[x][y] + 1){
                        loc[Math.abs(x - 1)][y + K] = loc[x][y] + 1;
                        queue.add(Math.abs(x - 1) * N + y + K);
                    }
                }
            }

        }

        System.out.println(answer ? 1 : 0);
    }
}