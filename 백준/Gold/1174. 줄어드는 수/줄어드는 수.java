import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static int N, cnt = 0;
    static long answer = -1;
    static void numGen(long prev, int prevNum, int idx){
        if(idx == 0){
            cnt++;
            if(cnt == N) answer = prev;
            return;
        }
        for(int i = 0; i <= 9; i++){
            if(prevNum <= i) break;
            numGen(prev * 10 + i, i,idx - 1);
        }
    }
    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        int size = 1;
        while(size <= 10){
            numGen(0, 10, size++);
        }
        System.out.println(answer);
    }
}
