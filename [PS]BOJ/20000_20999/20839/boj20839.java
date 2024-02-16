import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int A = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        int E = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        int z = Integer.parseInt(st.nextToken());

        if(A <= x && C <= y && E <= z){
            System.out.println("A");
        } else if(C <= y && E <= z){
            if((A + 1) / 2 <= x){
                System.out.println("B");
            } else {
                System.out.println("C");
            }
        } else if(E <= z){
            if((C + 1) / 2 <= y){
                System.out.println("D");
            } else {
                System.out.println("E");
            }
        }
    }
}