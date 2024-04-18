import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int minimum = Integer.MAX_VALUE;
		int maximum = Integer.MIN_VALUE;
		int N = Integer.parseInt(br.readLine());
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken());
			int y = Integer.parseInt(st.nextToken());
			minimum = Math.min(y, minimum);
			maximum = Math.max(y, maximum);
		}
		System.out.println(maximum - minimum);
	}
}