import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        HashSet<Integer> set = new HashSet<Integer>();
        for(int t = 0; t < N; t++){
            st = new StringTokenizer(br.readLine());
            String q = st.nextToken();
            switch (q){
                case "add":
                    set.add(Integer.parseInt(st.nextToken()));
                    break;
                case "remove":
                    set.remove(Integer.parseInt(st.nextToken()));
                    break;
                case "check":
                    sb.append(set.contains(Integer.parseInt(st.nextToken())) ? 1 : 0).append('\n');
                    break;
                case "toggle":
                    int x = Integer.parseInt(st.nextToken());
                    if(set.contains(x)) set.remove(x);
                    else set.add(x);
                    break;
                case "all":
                    for(int i = 1; i <= 20; i++) set.add(i);
                    break;
                case "empty":
                    set.clear();
                    break;
            }
        }
        System.out.println(sb);
    }
}