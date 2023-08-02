import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            br.readLine();
            st = new StringTokenizer(br.readLine());
            int r = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            char[][] arr = new char[r][c];
            for(int i = 0; i < r; i++){
                String tmp = br.readLine();
                for(int j = 0; j < c; j++){
                    arr[i][j] = tmp.charAt(j);
                }
            }
            int cnt = 0;
            for(int i = 0; i < r; i++){
                for(int j = 0; j < c; j++){
                    if(arr[i][j] == 'o'){
                        if(i - 1 >= 0 && i + 1 < r && arr[i - 1][j] == 'v' && arr[i + 1][j] == '^'){
                            cnt++;
                        }
                        if(j - 1 >= 0 && j + 1 < c && arr[i][j - 1] == '>' && arr[i][j + 1] == '<'){
                            cnt++;
                        }
                    }
                }
            }
            System.out.println(cnt);
        }
    }
}