import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        String str = br.readLine();
        HashSet<Character> visited = new HashSet<Character>();
        st = new StringTokenizer(br.readLine());
        while(st.hasMoreTokens()){
            visited.add(st.nextToken().charAt(0));
        }
        for(int i = 0; i < str.length(); i++){
            if(visited.contains(str.charAt(i))){
                System.out.print((char) (str.charAt(i) + 32));
            } else {
                System.out.print(str.charAt(i));
            }
        }
    }
}