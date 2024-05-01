import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int answer = 0;
		int N = Integer.parseInt(br.readLine());
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int c = Integer.parseInt(st.nextToken());
			a = (a == -1 ? Integer.MAX_VALUE : a);
			b = (b == -1 ? Integer.MAX_VALUE : b);
			c = (c == -1 ? Integer.MAX_VALUE : c);
			if(a == Integer.MAX_VALUE && b == Integer.MAX_VALUE && c == Integer.MAX_VALUE) continue;
			if(a <= b && b <= c) answer++;
		}
		System.out.println(answer);
	}
}