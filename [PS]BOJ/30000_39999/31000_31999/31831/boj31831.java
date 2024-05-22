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
		int sum = 0, answer = 0;
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			sum += Integer.parseInt(st.nextToken());
			sum = Math.max(sum, 0);
			if(sum >= M) answer++;
		}
		System.out.println(answer);
	}
}