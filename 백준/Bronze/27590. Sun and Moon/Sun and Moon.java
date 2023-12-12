import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int ds = Integer.parseInt(st.nextToken());
        int ys = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int dm = Integer.parseInt(st.nextToken());
        int ym = Integer.parseInt(st.nextToken());

        int solar_calendar = ys - ds;
        int lunar_calendar = ym - dm;

        while(solar_calendar != lunar_calendar){
            if(solar_calendar < lunar_calendar) solar_calendar += ys;
            if(solar_calendar > lunar_calendar) lunar_calendar += ym;
        }
        System.out.println(solar_calendar);
    }
}
