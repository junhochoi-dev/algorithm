import javax.lang.model.type.ArrayType;
import java.io.*;
import java.util.*;

public class Main{
    static int sum = 0;
    static int[] arr, seq;
    static boolean ans = true;
    static void snowwhite(int idx, int count){
        // used
        sum += arr[idx];
        seq[count] = arr[idx];
        if (sum == 100 && count == 7) {
            for(int i = 1; i <= 7; i++) System.out.println(seq[i]);
            return;
        }
        if(idx + 1 <= 9) snowwhite(idx + 1, count + 1);
        sum -= arr[idx];

        // not used
        if(idx + 1 <= 9) snowwhite(idx + 1, count);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        arr = new int[10];
        seq = new int[10];
        for(int i = 1; i <= 9; i++){
            arr[i] = Integer.parseInt(br.readLine());
        }
        snowwhite(1, 1);
    }
}