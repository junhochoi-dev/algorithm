import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int T = Integer.parseInt(br.readLine());
		for (int i = 0; i < T; i++) {
			int Y = Integer.parseInt(br.readLine());
			sb.append((Y + 1) % (Y % 100) == 0 ? "Good\n" : "Bye\n");
		}
		System.out.println(sb);
	}
}