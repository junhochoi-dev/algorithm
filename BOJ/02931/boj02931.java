import java.io.*;
import java.util.*;

public class Main {
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int R = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        char[][] map = new char[R][C];
        for(int i = 0; i < R; i++) {
            String temp = br.readLine();
            for(int j = 0; j < C; j++) {
                map[i][j] = temp.charAt(j);
            }
        }
        Map<Integer, Character> numToDirection = new HashMap<>();
        String directionString = "-4132|+";
        int[] idx = new int[] {3, 5, 6, 9, 10, 12, 15};
        for(int i = 0; i < 7; i++) numToDirection.put(idx[i], directionString.charAt(i));

        int[][] dxy = {{0,-1},{0,1},{1,0},{-1,0}};
        String[] ableDirectionString = { "-12+", "-34+", "|23+", "|14+",};
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                int flag = 0;
                if(map[i][j] != '.') continue;
                for(int k = 0; k < 4; k++) {
                    int tx = i + dxy[k][0];
                    int ty = j + dxy[k][1];
                    if(tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
                    if(ableDirectionString[k].contains(String.valueOf(map[tx][ty]))) flag += 1 << k;
                }
                if(numToDirection.containsKey(flag)) {
                    sb.append(i + 1).append(" ").append(j + 1).append(" ").append(numToDirection.get(flag));
                }
            }
        }
        System.out.println(sb);
    }
}
