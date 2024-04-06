import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		String str = "WelcomeToSMUPC";
		int N = Integer.parseInt(br.readLine()) - 1;
		System.out.println(str.charAt(N % str.length()));
	}
}