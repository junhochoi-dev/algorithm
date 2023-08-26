import java.io.*;
import java.util.*;

public class Solution{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N;
    static int processorCurrCnt, processorMaxCnt;
    static int wireCurrCnt, wireMinCnt;
    static int[][] arr;
    static ArrayList<Integer> processorList;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static boolean wireInstallation(int curr, int direction){
        int x = curr / N;
        int y = curr % N;

        if(arr[x][y] == 1) return false;
        if(arr[x][y] == 2) return false;
        int tx = x + dx[direction];
        int ty = y + dy[direction];
        int next = tx * N + ty;
        if(tx < 0 || ty < 0 || tx >= N || ty >= N) {
            wireCurrCnt++;
            arr[x][y] = 2;
            return true;
        }
        if(arr[tx][ty] == 1) return false;
        if(arr[tx][ty] == 2) return false;
        boolean able = wireInstallation(next, direction);
        if(able) {
            wireCurrCnt++;
            arr[x][y] = 2;
        }
        return able;
    }
    static void wireRemoval(int curr, int direction){
        int x = curr / N;
        int y = curr % N;
        wireCurrCnt--;
        arr[x][y] = 0;
        int tx = x + dx[direction];
        int ty = y + dy[direction];
        int next = tx * N + ty;
        if(tx < 0 || ty < 0 || tx >= N || ty >= N) return;
        wireRemoval(next, direction);
    }
    static void renew(){
        if(processorMaxCnt < processorCurrCnt){
            processorMaxCnt = processorCurrCnt;
            wireMinCnt = wireCurrCnt;
        }
        else if(processorMaxCnt == processorCurrCnt){
            if(wireMinCnt > wireCurrCnt) wireMinCnt = wireCurrCnt;
        }
    }
    static void processorOn(int idx){
        if(processorMaxCnt > processorCurrCnt + processorList.size() - idx) return;
        int curr = processorList.get(idx);
        int x = curr / N;
        int y = curr % N;
        renew();
        for(int k = 0; k < 4; k++){
            int tx = x + dx[k];
            int ty = y + dy[k];
            int next = tx * N + ty;
            boolean able = wireInstallation(next, k);
            if(!able) continue;
            processorCurrCnt++;
            renew();
            for(int i = idx + 1; i < processorList.size(); i++){
                processorOn(i);
            }
            processorCurrCnt--;
            wireRemoval(next, k);
        }
        for(int i = idx + 1; i < processorList.size(); i++){
            processorOn(i);
        }
    }
    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            N = Integer.parseInt(br.readLine());
            arr = new int[N][N];
            processorList = new ArrayList<Integer>();
            processorMaxCnt = 0;
            processorCurrCnt = 0;
            wireCurrCnt = 0;
            wireMinCnt = Integer.MAX_VALUE;
            for(int i = 0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                for(int j = 0; j < N; j++){
                    arr[i][j] = Integer.parseInt(st.nextToken());
                    if(arr[i][j] == 1) {
                        if(i == 0 || j == 0 || i == N - 1 || j == N - 1) continue;
                        processorList.add(i * N + j);
                    }
                }
            }
            processorOn(0);
            sb.append("#").append(t).append(" ").append(wireMinCnt).append('\n');
        }
        System.out.println(sb);
    }
}