import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		int P = Integer.parseInt(st.nextToken());

		int answer = 0;
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			int cnt = 0;
			for (int j = 0; j < M; j++) {
				if (Integer.parseInt(st.nextToken()) == 0) {
					cnt++;
				}
			}
			if (cnt < P) {
				answer++;
			}
		}
		System.out.println(answer);
	}
}