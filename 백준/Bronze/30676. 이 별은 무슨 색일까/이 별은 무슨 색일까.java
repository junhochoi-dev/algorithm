import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        int lamda = Integer.parseInt(br.readLine());
        if(380 <= lamda && lamda < 425){
            System.out.println("Violet");
        } else if(lamda < 450) {
            System.out.println("Indigo");
        } else if(lamda < 495) {
            System.out.println("Blue");
        } else if(lamda < 570) {
            System.out.println("Green");
        } else if(lamda < 590) {
            System.out.println("Yellow");
        } else if(lamda < 620) {
            System.out.println("Orange");
        } else if(lamda <= 780) {
            System.out.println("Red");
        }
    }
}
