import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		String rotation = "IOSHZXN";
		String str = br.readLine();
		boolean answer = true;
		for (int i = 0; i < str.length(); i++) {
			if(!rotation.contains(str.charAt(i)+"")){
				answer = false;
			}
		}
		System.out.println(answer ? "YES" : "NO");
	}
}