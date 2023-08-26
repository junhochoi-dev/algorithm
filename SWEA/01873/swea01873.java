import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    static int H, W;
    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};
    static char[] numToDirection = {'^', 'v', '<', '>'};
    static char[] numToAlphabet = {'U', 'D', 'L', 'R'};
    static HashMap<Character, Integer> directionToNum = new HashMap<Character, Integer>();
    static HashMap<Character, Integer> alphabetToNum = new HashMap<Character, Integer>();
    static boolean range(int x, int y){
        if(x < 0 || y < 0 || x >= H || y >= W) return false;
        return true;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());

        for(int i = 0; i < 4; i++){
            directionToNum.put(numToDirection[i], i);
            alphabetToNum.put(numToAlphabet[i], i);
        }

        for(int t = 1; t <= T; t++){
            st = new StringTokenizer(br.readLine());
            H = Integer.parseInt(st.nextToken());
            W = Integer.parseInt(st.nextToken());
            char[][] arr = new char[H][W];
            int x = -1, y = -1;
            for(int i = 0; i < H; i++){
                String tmp = br.readLine();
                for(int j = 0; j < W; j++){
                    arr[i][j] = tmp.charAt(j);
                    if("^v<>".contains(String.valueOf(arr[i][j]))){
                        x = i;
                        y = j;
                    }
                }
            }

            int N = Integer.parseInt(br.readLine());
            String movement = br.readLine();
            for(int i = 0; i < N; i++){
                char ch = movement.charAt(i);
                if("UDLR".contains(String.valueOf(ch))){
                    int std = alphabetToNum.get(ch);
                    int tx = x + dx[std];
                    int ty = y + dy[std];
                    if(range(tx, ty) && arr[tx][ty] == '.' && arr[tx][ty] != '-'){
                        arr[x][y] = '.';
                        arr[tx][ty] = numToDirection[std];
                        x = tx;
                        y = ty;
                    }
                    else arr[x][y] = numToDirection[std];
                }
                else{
                    int std = directionToNum.get(arr[x][y]);
                    int tx = x;
                    int ty = y;
                    while(true){
                        tx += dx[std];
                        ty += dy[std];
                        if(!range(tx, ty)) break;
                        if(arr[tx][ty] == '#') break;
                        if(arr[tx][ty] == '*') {
                            arr[tx][ty] = '.';
                            break;
                        }
                    }
                }
            }
            sb.append("#").append(t).append(" ");
            for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                    sb.append(arr[i][j]);
                }
                sb.append('\n');
            }
        }
        System.out.println(sb);
    }
}
