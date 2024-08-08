import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        String S = br.readLine();
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < S.length(); i++) {
            if(S.charAt(i) == '0'){
                cnt0++;
            } else {
                cnt1++;
            }
        }
        boolean[] visited = new boolean[S.length()];
        int temp0 = 0, temp1 = 0;
        for (int i = 0; i < S.length(); i++) {
            if(S.charAt(i) == '1'){
                if(temp1 < cnt1 / 2){
                    visited[i] = true;
                    temp1++;
                }
            }
        }
        for (int i = S.length() - 1; i >= 0; i--) {
            if(S.charAt(i) == '0'){
                if(temp0 < cnt0 / 2){
                    visited[i] = true;
                    temp0++;
                }
            }
        }
        for (int i = 0; i < S.length(); i++) {
            if(!visited[i]){
                sb.append(S.charAt(i));
            }
        }
        System.out.println(sb);
    }
}