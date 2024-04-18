import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		String A = br.readLine();
		String B = br.readLine();
		int C = Integer.parseInt(br.readLine());
		System.out.println(Integer.parseInt(A) + Integer.parseInt(B) - C);
		System.out.println(Integer.parseInt(A + B) - C);
	}
}