import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int S = Integer.parseInt(br.readLine());
		if(20 <= S && S <= 23) S = 24 - S;
		else S = -S;
		int W = Integer.parseInt(br.readLine());
		System.out.println(S + W);
	}
}