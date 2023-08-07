import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        char[][] arr = new char[N][M];
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            for(int j = 0; j < M; j++){
                arr[i][j] = temp.charAt(j);
            }
        }
        br.readLine();
        int ans = 0;
        for(int i = 0; i < N; i++){
            String temp = br.readLine();
            for(int j = 0; j < M; j++){
                if(temp.charAt(j) == arr[i][j]){
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}
