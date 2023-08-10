import java.io.*;
import java.util.*;

public class Solution{
    static StringBuilder sb = new StringBuilder();
    static int win, lose, kysum, iysum, cardsum;
    static int[] ky, seq, iy;
    static HashSet<Integer> visited = new HashSet<Integer>();
    static int factorial(int n){
        int ans = 1;
        for(int i = 2; i <= n; i++) ans *= i;
        return ans;
    }
    static void next_permutation(int idx){
        if(idx == 8){
            if(kysum > iysum) win++;
            if(kysum < iysum) lose++;
            return;
        }
        if(kysum - iysum > cardsum){
            win += factorial(9 - idx - 1);
            return;
        }
        if(iysum - kysum > cardsum){
            lose += factorial(9 - idx - 1);;
            return;
        }
        for(int i = 0; i < 9; i++){
            if(visited.contains(seq[i])) continue;
            iy[idx + 1] = seq[i];
            visited.add(seq[i]);
            if(ky[idx + 1] > iy[idx + 1]) kysum += ky[idx + 1] + iy[idx + 1];
            if(ky[idx + 1] < iy[idx + 1]) iysum += ky[idx + 1] + iy[idx + 1];
            cardsum -= ky[idx + 1] + iy[idx + 1];
            next_permutation(idx + 1);
            cardsum += ky[idx + 1] + iy[idx + 1];
            if(ky[idx + 1] > iy[idx + 1]) kysum -= ky[idx + 1] + iy[idx + 1];
            if(ky[idx + 1] < iy[idx + 1]) iysum -= ky[idx + 1] + iy[idx + 1];
            visited.remove(seq[i]);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int T = Integer.parseInt(br.readLine());
        for(int t = 1; t <= T; t++){
            win = lose = kysum = iysum = 0;
            cardsum = 171;
            ky = new int[9];
            iy = new int[9];
            seq = new int[9];
            st = new StringTokenizer(br.readLine());
            Set<Integer> numlist = new HashSet<Integer>();
            for(int i = 0; i < 9; i++){
                ky[i] = Integer.parseInt(st.nextToken());
                numlist.add(ky[i]);
            }
            int index = 0;
            for(int i = 1; i <= 18; i++){
                if(numlist.contains(i)) continue;
                seq[index++] = i;
            }
            for(int i = 0; i < 9; i++){
                if(visited.contains(seq[i])) continue;
                iy[0] = seq[i];
                visited.add(seq[i]);
                if(ky[0] > iy[0]) kysum += ky[0] + iy[0];
                if(ky[0] < iy[0]) iysum += ky[0] + iy[0];
                cardsum -= ky[0] + iy[0];
                next_permutation(0);
                cardsum += ky[0] + iy[0];
                if(ky[0] > iy[0]) kysum -= ky[0] + iy[0];
                if(ky[0] < iy[0]) iysum -= ky[0] + iy[0];
                visited.remove(seq[i]);
            }
            sb.append("#").append(t).append(" ").append(win).append(" ").append(lose).append('\n');
        }
        System.out.println(sb);
    }
}