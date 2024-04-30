import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		String[] str = new String[3];
		for (int i = 0; i < 3; i++) {
			str[i] = br.readLine();
		}
		Arrays.sort(str);
		System.out.println(str[0].charAt(0) == 'k'
			&& str[1].charAt(0) == 'l'
			&& str[2].charAt(0) == 'p'
			? "GLOBAL" : "PONIX");
	}
}