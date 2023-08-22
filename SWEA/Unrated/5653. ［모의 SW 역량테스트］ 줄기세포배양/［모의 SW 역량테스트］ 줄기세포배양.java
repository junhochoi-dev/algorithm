import java.io.*;
import java.util.*;

public class Solution {
    static StringBuilder sb = new StringBuilder();
    static int N, M, K;
    static int[][] livetime; // -1 time * 2
    static int[][] activetime;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            M = Integer.parseInt(st.nextToken());
            K = Integer.parseInt(st.nextToken());
            livetime = new int[N + 2 * K][M + 2 * K];
            activetime = new int[N + 2 * K][M + 2 * K];
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                for(int j = 0; j < M; j++){
                    activetime[K + i][K + j] = Integer.parseInt(st.nextToken());
                    livetime[K + i][K + j] = activetime[K + i][K + j] * 2;
                }
            }
            N = N + 2 * K;
            M = M + 2 * K;
            Queue<Integer> activeList = new ArrayDeque<Integer>();
            for(int currtime = 1; currtime <= K; currtime++){
                while(!activeList.isEmpty()){
                    int curr = activeList.poll();
                    int x = curr / M;
                    int y = curr % M;
                    for(int k = 0; k < 4; k++){
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if(livetime[tx][ty] == -1) continue;
                        if(livetime[tx][ty] != 0){
                            if(livetime[tx][ty] - currtime < activetime[tx][ty] * 2) continue;
                            if(livetime[tx][ty] - currtime == activetime[tx][ty] * 2 && activetime[x][y] <= activetime[tx][ty]) continue;
                        }
                        livetime[tx][ty] = currtime + activetime[x][y] * 2;
                        activetime[tx][ty] = activetime[x][y];
                    }
                }
                for(int i = 0; i < N; i++){
                    for(int j = 0; j < M; j++){
                        if(currtime == livetime[i][j] - activetime[i][j]) activeList.add(i * M + j);
                        if(currtime == livetime[i][j]) livetime[i][j] = -1;
                    }
                }
            }
            int answer = 0;
            for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                    if(livetime[i][j] > K) answer++;
                }
            }
            sb.append("#").append(t).append(" ");
            sb.append(answer).append('\n');
        }
        System.out.println(sb);
    }
}
