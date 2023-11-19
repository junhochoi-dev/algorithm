import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        String date = br.readLine();
        //2023 09 16
        int year = Integer.parseInt(date.substring(0, 4));
        int month = Integer.parseInt(date.substring(5, 7));
        int day = Integer.parseInt(date.substring(8, 10));
        if(year < 2023) System.out.println("GOOD");
        else if(year == 2023 && month < 9) System.out.println("GOOD");
        else if(year == 2023 && month == 9 && day <= 16) System.out.println("GOOD");
        else System.out.println("TOO LATE ");
    }
}