import java.io.*;
import java.util.*;

public class Main {
    public static boolean check(String ques, String std, int strike, int ball){
        int s = 0;
        int b = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(ques.charAt(i) == std.charAt(j)){
                    if(i == j) s++;
                    if(i != j) b++;
                }
            }
        }
        if(strike == s && ball == b){
            //System.out.println(ques + " " + std + " S:" + strike + " B:" + ball);
            return true;
        }
        return false;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        boolean[][][] caseList = new boolean[10][10][10];
        int cnt = 0;
        for(int t = 0; t < N; t++){
            st = new StringTokenizer(br.readLine());
            String ques = st.nextToken();
            String num = "0123456789";
            int s = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            for(int i = 1; i <= 9; i++){
                for(int j = 1; j <= 9; j++){
                    for(int k = 1; k <= 9; k++){
                        String std = num.charAt(i) + "" + num.charAt(j) + "" + num.charAt(k);
                        if(!check(ques, std, s, b)) caseList[i][j][k] = true;
                    }
                }
            }
        }
        for(int i = 1; i <= 9; i++){
            for(int j = 1; j <= 9; j++){
                for(int k = 1; k <= 9; k++){
                    if(i == j || j == k || k == i) continue;
                    if(!caseList[i][j][k]) cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}
