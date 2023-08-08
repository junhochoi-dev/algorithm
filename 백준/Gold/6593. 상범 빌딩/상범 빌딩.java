import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int L, R, C;
    static int[] dx = {1, -1, 0, 0, 0, 0}, dy = {0, 0, 1, -1, 0, 0}, dz = {0, 0, 0, 0, 1, -1};
    static char[][][] building = new char[30][30][30];
    static int[][][] dist = new int[30][30][30];
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        while(true){
            st = new StringTokenizer(br.readLine());
            L = Integer.parseInt(st.nextToken());
            R = Integer.parseInt(st.nextToken());
            C = Integer.parseInt(st.nextToken());
            int sangbeom = -1;
            int exit = -1;
            if(L == 0 && R == 0 && C == 0) break;
            for(int i = 0; i < L; i++){
                for(int j = 0; j < R; j++){
                    String temp = br.readLine();
                    for(int k = 0; k < C; k++){
                        building[i][j][k] = temp.charAt(k);
                        dist[i][j][k] = Integer.MAX_VALUE;
                        if(building[i][j][k] == 'S'){
                            sangbeom = i * R * C + j * C + k;
                            dist[i][j][k] = 0;
                        }
                        if(building[i][j][k] == 'E') exit = i * R * C + j * C + k;
                    }
                }
                br.readLine();
            }
            Queue<Integer> queue = new LinkedList<Integer>();
            queue.add(sangbeom);
            while(!queue.isEmpty()){
                int curr = queue.poll();
                int x = curr / (R * C);
                int y = (curr % (R * C)) / C;
                int z = (curr % (R * C)) % C;

                for(int k = 0; k < 6; k++){
                    int tx = x + dx[k];
                    int ty = y + dy[k];
                    int tz = z + dz[k];
                    if(tx < 0 || ty < 0 || tz < 0) continue;
                    if(tx >= L || ty >= R || tz >= C) continue;
                    if(building[tx][ty][tz] == '#') continue;
                    if(dist[tx][ty][tz] <= dist[x][y][z] + 1) continue;
                    dist[tx][ty][tz] = dist[x][y][z] + 1;
                    queue.add(tx * R * C + ty * C + tz);
                }
            }
            int ex = exit / (R * C);
            int ey = (exit % (R * C)) / C;
            int ez = (exit % (R * C)) % C;
            sb.append(dist[ex][ey][ez] == Integer.MAX_VALUE ? "Trapped!\n" : "Escaped in " + dist[ex][ey][ez] + " minute(s).\n");
        }
        System.out.println(sb);
    }
}