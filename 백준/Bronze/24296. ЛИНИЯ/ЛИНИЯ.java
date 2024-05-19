import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		while (true) {
			if (N % 2 == 0) {
				System.out.println(N);
				break;
			}
			N++;
			N /= 2;
		}
	}
}