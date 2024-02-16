
import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static String str, answer = "";
    static void func(){
        answer = str + '\n' + answer;
        if(str.length() == 1) return;
        for(int i = 0; i < str.length() - 1; i++){
            if(str.charAt(i) > str.charAt(i + 1)){
                str = str.substring(0, i) + str.substring(i + 1);
                func();
                return;
            }
        }
        str = str.substring(0, str.length() - 1);
        func();
    }
    public static void main(String[] args) throws Exception {
        str = br.readLine();
        func();
        System.out.print(answer);
    }
}
