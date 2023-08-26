import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static class Shark{
        boolean dead;
        int row, col, speed, direction, weight;
        public Shark(boolean dead, int row, int col, int speed, int direction, int weight) {
            this.dead = dead;
            this.row = row;
            this.col = col;
            this.speed = speed;
            this.direction = direction;
            this.weight = weight;
        }
    }
    static int R, C, M;
    static int[][] arr;
    static int[] dx = {0, -1, 1, 0, 0};
    static int[] dy = {0, 0, 0, 1, -1};
    static HashMap<Integer, Shark> sharkList = new HashMap<Integer, Shark>();
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        R = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        arr = new int[R][C];
        for(int i = 1; i <= M; i++){
            st = new StringTokenizer(br.readLine());
            int r = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            arr[r - 1][c - 1] = i;
            int s = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            sharkList.put(i, new Shark(false, r - 1, c - 1, s, d, w));
        }
        int answer = 0;

        for(int i = 0; i < C; i++){
            for(int j = 0; j < R; j++){
                if(arr[j][i] != 0){
                    answer += sharkList.get(arr[j][i]).weight;
                    sharkList.get(arr[j][i]).dead = true;
                    arr[j][i] = 0;
                    break;
                }
            }
            for(int currIdx : sharkList.keySet()){
                if(sharkList.get(currIdx).dead) continue;
                Shark curr = sharkList.get(currIdx);
                int tempdirection = curr.direction, temprow = curr.row, tempcol = curr.col;

                if(arr[curr.row][curr.col] == currIdx) arr[curr.row][curr.col] = 0;
                int ddx = curr.row + dx[curr.direction] * curr.speed;
                int ddy = curr.col + dy[curr.direction] * curr.speed;

                if(ddx < 0 || ddx > R - 1){
                    if(Math.abs(ddx) / (R - 1) % 2 == 0){
                        tempdirection = 2;
                        temprow = Math.abs(ddx) % (R - 1);
                    }
                    else{
                        tempdirection = 1;
                        temprow = (R - 1) - Math.abs(ddx) % (R - 1);
                    }
                }
                else temprow = ddx;

                if(ddy < 0 || ddy > C - 1){
                    if(Math.abs(ddy) / (C - 1) % 2 == 0){
                        tempdirection = 3;
                        tempcol = Math.abs(ddy) % (C - 1);
                    }
                    else{
                        tempdirection = 4;
                        tempcol = (C - 1) - Math.abs(ddy) % (C - 1);
                    }
                }
                else tempcol = ddy;

                sharkList.put(currIdx, new Shark(curr.dead, temprow, tempcol, curr.speed, tempdirection, curr.weight));
                curr = sharkList.get(currIdx);

                if(arr[curr.row][curr.col] != 0){
                    if(arr[curr.row][curr.col] < currIdx){
                        if(sharkList.get(arr[curr.row][curr.col]).weight > curr.weight){
                            sharkList.get(currIdx).dead = true;
                        }
                        else{
                            sharkList.get(arr[curr.row][curr.col]).dead = true;
                            arr[curr.row][curr.col] = currIdx;
                        }
                    }
                    else arr[curr.row][curr.col] = currIdx;
                }
                else arr[curr.row][curr.col] = currIdx;

            }
        }
        System.out.println(answer);
    }
}
