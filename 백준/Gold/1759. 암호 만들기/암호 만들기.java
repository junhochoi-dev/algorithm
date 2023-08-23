import java.io.*;
import java.util.*;

public class Main {
    static StringBuilder sb = new StringBuilder();
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    static int L, C;
    static char[] arr;
    static char[] sequence;
    static void next_permutation(int startidx, int seqidx, int consonant, int vowel){
        for(int i = startidx; i < C; i++){
            int c = 0, v = 0;
            sequence[seqidx] = arr[i];
            if("aeiou".contains(String.valueOf(arr[i]))) v = 1;
            else c = 1;
            if(seqidx + 1 == L){
                if(consonant + c >= 2 && vowel + v >= 1){
                    for(int j = 0; j < L; j++) sb.append(sequence[j]);
                    sb.append('\n');
                }
                continue;
            }
            next_permutation(i + 1, seqidx + 1, consonant + c, vowel + v);
        }
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        L = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        arr = new char[C];
        sequence = new char[L];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < C; i++) arr[i] = st.nextToken().charAt(0);
        Arrays.sort(arr);
        next_permutation(0, 0, 0, 0);
        System.out.println(sb);
    }
}
