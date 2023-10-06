    import java.io.*;
    import java.util.*;

    public class Main {
        static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        static StringBuilder sb = new StringBuilder();
        static StringTokenizer st;

        public static void main(String[] args) throws Exception {
            st = new StringTokenizer(br.readLine());
            double M = Double.parseDouble(st.nextToken());
            double S = Double.parseDouble(st.nextToken());
            double G = Double.parseDouble(st.nextToken());

            st = new StringTokenizer(br.readLine());
            double A = Double.parseDouble(st.nextToken());
            double B = Double.parseDouble(st.nextToken());

            st = new StringTokenizer(br.readLine());
            double L = Double.parseDouble(st.nextToken());
            double R = Double.parseDouble(st.nextToken());

            double left = L / A + (M % G == 0 ? M / G : M / G + 1);
            double right = R / B + (M % S == 0 ? M / S : M / S + 1);

            System.out.println(left < right ? "friskus" : "latmask");
        }
    }   