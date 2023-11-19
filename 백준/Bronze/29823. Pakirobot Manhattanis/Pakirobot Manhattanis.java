import java.io.*;
import java.util.*;

public class Main{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        HashMap<Character, Integer> cnt = new HashMap<>();
        cnt.put('N', 0);
        cnt.put('S', 0);
        cnt.put('E', 0);
        cnt.put('W', 0);
        int N = Integer.parseInt(br.readLine());
        String direction = br.readLine();
        for(int i = 0; i < direction.length(); i++){
            cnt.put(direction.charAt(i), cnt.get(direction.charAt(i)) + 1);
        }
        System.out.println(Math.abs(cnt.get('N') - cnt.get('S')) + Math.abs(cnt.get('E') - cnt.get('W')));
    }
}
