import java.io.*;
import java.util.*;

public class Main {
    public static String Cantor(int x, int l, boolean blank){
        if(l == 1) return blank ? " " : "-";
        l /= 3;
        return Cantor(x, l, blank) + Cantor(x + l, l, true) + Cantor(x + 2 * l, l, blank);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while(true){
            try {
                int N = Integer.parseInt(br.readLine());
                System.out.println(Cantor(0, (int)Math.pow(3, N), false));
            } catch (EOFException e){
                break;
            } catch (NumberFormatException e){
                break;
            }
        }
    }
}
