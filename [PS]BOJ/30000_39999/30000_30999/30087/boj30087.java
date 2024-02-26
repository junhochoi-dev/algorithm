import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        HashMap<String, String> hm = new HashMap<>();
        hm.put("Algorithm", "204");
        hm.put("DataAnalysis", "207");
        hm.put("ArtificialIntelligence", "302");
        hm.put("CyberSecurity", "B101");
        hm.put("Network", "303");
        hm.put("Startup", "501");
        hm.put("TestStrategy", "105");
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N; i++) {
            String query = br.readLine();
            sb.append(hm.get(query)).append('\n');
        }
        System.out.println(sb);
    }
}