import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int MOD = 16769023, answer = 1;
		for (int i = 1; i <= N; i++) {
			if(i % 2 == 1) answer <<= 1;
			answer %= MOD;
		}
		System.out.println(answer);
	}
}