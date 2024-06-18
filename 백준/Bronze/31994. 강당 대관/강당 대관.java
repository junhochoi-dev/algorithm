import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int maximum = 0;
        String selectedSeminar = "";
        for (int i = 0; i < 7; i++) {
            st = new StringTokenizer(br.readLine());
            String seminar = st.nextToken();
            int application = Integer.parseInt(st.nextToken());
            if(application > maximum){
                maximum = application;
                selectedSeminar = seminar;
            }
        }
        System.out.println(selectedSeminar);
    }
}