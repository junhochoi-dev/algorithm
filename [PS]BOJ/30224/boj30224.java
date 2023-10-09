import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        String num_string = br.readLine();
        int num_integer = Integer.parseInt(num_string);
        if(!num_string.contains("7") && num_integer % 7 != 0) System.out.println(0);
        if(!num_string.contains("7") && num_integer % 7 == 0) System.out.println(1);
        if(num_string.contains("7") && num_integer % 7 != 0) System.out.println(2);
        if(num_string.contains("7") && num_integer % 7 == 0) System.out.println(3);
    }
}