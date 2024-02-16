
import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws Exception {
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());

        int arr[][] = new int[N][N];

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < N; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        int day = 0;
        while(true){
            int group[][] = new int[N][N];

            ArrayList<Integer> groupValue = new ArrayList<Integer>();
            groupValue.add(0);

            int groupNum = 1;

            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(group[i][j] != 0) continue;
                    group[i][j] = -1;
                    // 국경선 개방 체크
                    boolean union = false;
                    for(int k = 0; k < 4; k++){
                        int tx = i + dx[k];
                        int ty = j + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                        if(group[tx][ty] != 0) continue;

                        int gap = Math.abs(arr[i][j] - arr[tx][ty]);
                        if(L <= gap && gap <= R) union = true;
                    }
                    if(!union) continue;

                    // 개방 후 연합
                    Queue<Integer> queue = new ArrayDeque<>();
                    group[i][j] = groupNum;
                    queue.add(i * N + j);
                    groupValue.add(arr[i][j]);

                    int cnt = 1;
                    while(!queue.isEmpty()){
                        int curr = queue.poll();
                        int x = curr / N;
                        int y = curr % N;
                        for(int k = 0; k < 4; k++){
                            int tx = x + dx[k];
                            int ty = y + dy[k];
                            int next = tx * N + ty;
                            if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                            if(group[tx][ty] != 0) continue;

                            // 연합 가능 체크
                            int gap = Math.abs(arr[x][y] - arr[tx][ty]);
                            if(!(L <= gap && gap <= R)) continue;

                            groupValue.set(groupNum, groupValue.get(groupNum) + arr[tx][ty]);
                            group[tx][ty] = groupNum;
                            queue.add(next);
                            cnt++;
                        }
                    }
                    groupValue.set(groupNum, groupValue.get(groupNum) / cnt);

                    groupNum++;
                }
            }
            if(groupValue.size() == 1) break;
            day++;
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(group[i][j] == -1) continue;
                    arr[i][j] = groupValue.get(group[i][j]);
                }
            }
        }
        System.out.println(day);
    }
}
