import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		while (true) {
			String str = br.readLine();
			if (str.equals("***")) {
				break;
			}
			for (int i = str.length() - 1; i >= 0; i--) {
				sb.append(str.charAt(i));
			}
			sb.append('\n');
		}
		System.out.println(sb);
	}
}