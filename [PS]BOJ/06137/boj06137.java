import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        char[] arr = new char[N];
        for(int i = 0; i < N; i++) arr[i] = br.readLine().charAt(0);

        StringBuilder answer = new StringBuilder();
        int left = 0, right = N - 1;
        while(left <= right){
            if(arr[left] < arr[right]){
                answer.append(arr[left++]);
            }
            else if(arr[left] > arr[right]){
                answer.append(arr[right--]);
            }
            else {
                int lleft = left, rright = right;
                while(lleft < rright && arr[lleft] == arr[rright]) {
                    lleft++; rright--;
                }
                if(arr[lleft] < arr[rright]) answer.append(arr[left++]);
                else answer.append(arr[right--]);
            }
        }
        for(int i = 0; i < N; i++){
            if(i != 0 && i % 80 == 0) System.out.println();
            System.out.print(answer.charAt(i));
        }
    }
}
