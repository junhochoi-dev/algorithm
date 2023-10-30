import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int white = 0;
        int black = 0;
        for(int i = 0; i < 8; i++){
            String temp = br.readLine();
            for(int j = 0; j < 8; j++){
                if('a' <= temp.charAt(j) && temp.charAt(j) <= 'z'){
                    if(temp.charAt(j) == 'k') black += 0;
                    if(temp.charAt(j) == 'p') black += 1;
                    if(temp.charAt(j) == 'n') black += 3;
                    if(temp.charAt(j) == 'b') black += 3;
                    if(temp.charAt(j) == 'r') black += 5;
                    if(temp.charAt(j) == 'q') black += 9;
                }
                if('A' <= temp.charAt(j) && temp.charAt(j) <= 'Z'){
                    if(temp.charAt(j) == 'K') white += 0;
                    if(temp.charAt(j) == 'P') white += 1;
                    if(temp.charAt(j) == 'N') white += 3;
                    if(temp.charAt(j) == 'B') white += 3;
                    if(temp.charAt(j) == 'R') white += 5;
                    if(temp.charAt(j) == 'Q') white += 9;
                }
            }
        }
        System.out.println(white - black);
    }
}