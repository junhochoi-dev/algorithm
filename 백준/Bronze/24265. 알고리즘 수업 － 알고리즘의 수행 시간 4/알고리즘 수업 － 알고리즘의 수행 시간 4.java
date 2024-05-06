import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		long N = Long.parseLong(br.readLine());
		System.out.println(N * (N - 1) / 2);
		System.out.println(2);
	}
}