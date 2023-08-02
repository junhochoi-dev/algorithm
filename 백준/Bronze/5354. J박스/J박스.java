import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();

        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++){
            int N = Integer.parseInt(br.readLine());
            if(N == 1){
                System.out.println("#");
                System.out.println();
                continue;
            }
            for(int i = 0; i < N; i++) System.out.print('#');
            System.out.println();
            for(int i = 0; i < N - 2; i++){
                System.out.print('#');
                for(int j = 0; j < N - 2; j++){
                    System.out.print('J');
                }
                System.out.print('#');
                System.out.println();
            }
            for(int i = 0; i < N; i++) System.out.print('#');
            System.out.println();
            System.out.println();
        }
    }
}