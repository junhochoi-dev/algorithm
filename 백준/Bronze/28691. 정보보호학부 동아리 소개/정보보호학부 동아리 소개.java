import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        char ch = br.readLine().charAt(0);
        if(ch == 'M') System.out.println("MatKor");
        if(ch == 'W') System.out.println("WiCys");
        if(ch == 'C') System.out.println("CyKor");
        if(ch == 'A') System.out.println("AlKor");
        if(ch == '$') System.out.println("$clear");
    }
}