
import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Solution {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, W, H, answer;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static int[][][] sequence;
    static class BLOCK{
        int x, y, size;
        BLOCK(int x, int y, int size){
            this.x = x;
            this.y = y;
            this.size = size;
        }
    }
    static void down(int seq){
        for(int i = H - 1; i > 0; i--){
            for(int j = 0; j < W; j++){
                if(sequence[seq][i][j] == 0){
                    for(int k = i - 1; k >= 0; k--){
                        if(sequence[seq][k][j] != 0) {
                            sequence[seq][i][j] = sequence[seq][k][j];
                            sequence[seq][k][j] = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    static int crash(int seq, int x, int y){
        Queue<BLOCK> queue = new ArrayDeque<BLOCK>();
        queue.add(new BLOCK(x, y, sequence[seq][x][y]));
        sequence[seq + 1][x][y] = 0;
        int sum = 1;

        while(!queue.isEmpty()){
            BLOCK curr = queue.poll();

            for(int k = 0; k < 4; k++){
                for(int l = 1; l < curr.size; l++){
                    int tx = curr.x + dx[k] * l;
                    int ty = curr.y + dy[k] * l;

                    if(tx < 0 || ty < 0 || tx >= H || ty >= W) break;
                    if(sequence[seq + 1][tx][ty] == 0) continue;
                    if(sequence[seq][tx][ty] == 0) continue;
                    queue.add(new BLOCK(tx, ty, sequence[seq][tx][ty]));
                    sequence[seq + 1][tx][ty] = 0;
                    sum++;
                }
            }
        }

        down(seq + 1);

        return sum;
    }
    static void ExhaustiveSearch(int seq, int sum){
        answer = Math.max(answer, sum);
        if(seq == N) return;

        for(int j = 0; j < W; j++){
            for(int i = 0; i < H; i++){
                if(sequence[seq][i][j] == 0) continue;

                for(int n = 0; n < H; n++){
                    for(int m = 0; m < W; m++){
                        sequence[seq + 1][n][m] = sequence[seq][n][m];
                    }
                }

                ExhaustiveSearch(seq + 1, sum + crash(seq, i, j));
                if(sequence[seq][i][j] != 0) break;
            }
        }
    }

    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            sb.append("#").append(t).append(" ");

            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            W = Integer.parseInt(st.nextToken());
            H = Integer.parseInt(st.nextToken());

            answer = 0;

            sequence = new int[N + 1][H][W];

            int cnt = 0;
            for(int i = 0; i < H; i++){
                st = new StringTokenizer(br.readLine());
                for(int j = 0; j < W; j++){
                    sequence[0][i][j] = Integer.parseInt(st.nextToken());
                    if(sequence[0][i][j] != 0) cnt++;
                }
            }

            ExhaustiveSearch(0, 0);
            sb.append(cnt - answer).append('\n');
        }
        System.out.println(sb);
    }
}