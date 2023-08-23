import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static class Seat{
        int loveCnt, emptySeat, rowcol;
        public Seat(int loveCnt, int emptySeat, int rowcol) {
            this.loveCnt = loveCnt;
            this.emptySeat = emptySeat;
            this.rowcol = rowcol;
        }
        boolean compare(Seat comp){
            if(this.loveCnt < comp.loveCnt) return true;
            else if(this.loveCnt > comp.loveCnt) return false;
            if(this.emptySeat < comp.emptySeat) return true;
            else if(this.emptySeat > comp.emptySeat) return false;
            if(this.rowcol > comp.rowcol) return true;
            return false;
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        HashMap<Integer, HashSet<Integer>> love = new HashMap<Integer, HashSet<Integer>>();
        Queue<Integer> queue = new ArrayDeque<Integer>();
        for(int i = 0; i < N * N; i++) {
            st = new StringTokenizer(br.readLine());
            int curr = Integer.parseInt(st.nextToken());
            queue.add(curr);
            love.put(curr, new HashSet<Integer>());
            for(int j = 0; j < 4; j++){
                love.get(curr).add(Integer.parseInt(st.nextToken()));
            }
        }
        int[][] arr = new int[N][N];
        while(!queue.isEmpty()){
            Seat bestSeat = new Seat(Integer.MIN_VALUE, Integer.MIN_VALUE, Integer.MAX_VALUE);
            int curr = queue.poll();
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(arr[i][j] != 0) continue;
                    int loveCnt = 0, emptySeat = 0;
                    for(int k = 0; k < 4; k++){
                        int tx = i + dx[k];
                        int ty = j + dy[k];
                        if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                        if(love.get(curr).contains(arr[tx][ty])) loveCnt++;
                        if(arr[tx][ty] == 0) emptySeat++;
                    }
                    Seat candidate = new Seat(loveCnt, emptySeat, i * N + j);

                    if(bestSeat.compare(candidate)){
                        bestSeat = candidate;
                    }
                }
            }
            arr[bestSeat.rowcol / N][bestSeat.rowcol % N] = curr;
        }
        int satisfaction = 0;
        for(int i = 0 ; i < N; i++){
            for(int j = 0; j < N; j++){
                int loveCnt = 0;
                for(int k = 0; k < 4; k++){
                    int tx = i + dx[k];
                    int ty = j + dy[k];
                    if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                    if(love.get(arr[i][j]).contains(arr[tx][ty])) loveCnt++;
                }
                satisfaction += (int)Math.pow(10, loveCnt - 1);
            }
        }
        System.out.println(satisfaction);
    }
}