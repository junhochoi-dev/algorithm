import java.io.*;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		String str = br.readLine();
		int cnt = 0;
		for (int i = 0; i < str.length() - 3; i++) {
			if (str.charAt(i) == 'k'
				&& str.charAt(i + 1) == 'i'
				&& str.charAt(i + 2) == 'c'
				&& str.charAt(i + 3) == 'k')
				cnt++;
		}
		System.out.println(cnt);
	}
}