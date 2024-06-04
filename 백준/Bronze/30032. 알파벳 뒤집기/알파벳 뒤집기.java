import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		HashMap<Character, Character> updown = new HashMap<>();
		HashMap<Character, Character> leftRight = new HashMap<>();
		updown.put('p', 'b');
		updown.put('b', 'p');
		updown.put('q', 'd');
		updown.put('d', 'q');
		leftRight.put('p', 'q');
		leftRight.put('q', 'p');
		leftRight.put('b', 'd');
		leftRight.put('d', 'b');
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int D = Integer.parseInt(st.nextToken());
		for (int i = 0; i < N; i++) {
			String str = br.readLine();
			for (int j = 0; j < str.length(); j++) {
				if (D == 1) {
					sb.append(updown.get(str.charAt(j)));
				}
				if (D == 2) {
					sb.append(leftRight.get(str.charAt(j)));
				}
			}
			sb.append('\n');
		}
		System.out.println(sb);
	}
}