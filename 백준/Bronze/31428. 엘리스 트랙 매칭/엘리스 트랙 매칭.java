import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
		int[] track = new int[4];
		HashMap<Character, Integer> hashmap = new HashMap<>();
		hashmap.put('C', 0);
		hashmap.put('S', 1);
		hashmap.put('I', 2);
		hashmap.put('A', 3);
		int N = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			track[hashmap.get(st.nextToken().charAt(0))]++;
		}
		System.out.println(track[hashmap.get(br.readLine().charAt(0))]);
    }
}