import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;


    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int[] dx = {0, -1, 0, 1};
        int[] dy = {-1, 0, 1, 0};
        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int[][] arr = new int[N][M];
        int[][] group = new int[N][M];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int maximum = 0;
        int groupNum = 1;
        HashMap<Integer, Integer> groupCnt = new HashMap<Integer, Integer>();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if(group[i][j] != 0) continue;
                int cnt = 0;
                Queue<Integer> queue = new ArrayDeque<Integer>();
                queue.add(i * M + j);
                group[i][j] = groupNum;
                while(!queue.isEmpty()){
                    int curr = queue.poll();
                    int x = curr / M;
                    int y = curr % M;
                    cnt++;
                    for(int k = 0; k < 4; k++){
                        int tx = x + dx[k];
                        int ty = y + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                        if((arr[x][y] & (1 << k)) != 0) continue;
                        if(group[tx][ty] != 0) continue;
                        group[tx][ty] = groupNum;
                        queue.add(tx * M + ty);
                    }
                }
                maximum = Math.max(maximum, cnt);
                groupCnt.put(groupNum, cnt);
                groupNum++;
            }
        }
        int sumMaximum = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                for(int k = 0; k < 4; k++) {
                    int tx = i + dx[k];
                    int ty = j + dy[k];
                    if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                    if(group[i][j] == group[tx][ty]) continue;
                    sumMaximum = Math.max(sumMaximum, groupCnt.get(group[i][j]) + groupCnt.get(group[tx][ty]));
                }
            }
        }
        sb.append(--groupNum).append('\n');
        sb.append(maximum).append('\n');
        sb.append(sumMaximum).append('\n');
        System.out.println(sb);
    }
}