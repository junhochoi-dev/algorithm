import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		String str = br.readLine();
		int std = 1, answer = 0;
		for (int i = 0; i < N; i++) {
			char curr = str.charAt(i);
			if(std != 1 && curr == 'L') std--;
			if(std != 3 && curr == 'R') std++;
			if(std == 3) answer++;
		}
		System.out.println(answer);
	}
}