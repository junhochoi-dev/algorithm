import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Set<Integer> socks = new HashSet<Integer>();
        for(int i = 0; i < 5; i++){
            int s = Integer.parseInt(br.readLine());
            if(socks.contains(s)) socks.remove(s);
            else socks.add(s);
        }
        for(int s : socks) System.out.println(s);
    }
}
