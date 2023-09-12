import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N;
    static ArrayList<Integer> S;
    static void moomoo(int idx, int sum){
        if(idx == 3){
            if(sum - idx + 1 == N) System.out.println('m');
            else System.out.println('o');
            return;
        }
        int wing = S.get(idx - 4);
        if(sum - wing < N){ //오른쪽
            moomoo(idx - 1, sum);
        } else if(sum - wing - idx < N){ //중간
            if(sum - wing - idx + 1 == N) System.out.println('m');
            else System.out.println('o');
        } else { //왼쪽
            moomoo(idx - 1, sum - wing - idx);
        }
    }
    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        S = new ArrayList<Integer>(){};
        S.add(3);
        while(S.get(S.size() - 1) < N){
            S.add(S.get(S.size() - 1) * 2 + S.size() + 3);
        }
        int idx = S.size() + 2;
        int sum = S.get(S.size() - 1);
        moomoo(idx, sum);
    }
    //0    3     3
    //1    3 4 3     10
    //2    3 4 3 5 3 4 3     25
    //3    3 4 3 5 3 4 3   6   3 4 3 5 3 4 3     56
}
