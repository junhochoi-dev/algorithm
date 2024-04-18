import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		while(true){
			st = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(st.nextToken());
			int M = Integer.parseInt(st.nextToken());
			if(N == 0 && M == 0) break;
			int answer = 0;
			st = new StringTokenizer(br.readLine());
			for (int i = 0; i < N; i++) {
				int A = Integer.parseInt(st.nextToken());
				answer += Math.min(M / N, A);
			}
			sb.append(answer).append('\n');
		}
		System.out.println(sb);
	}
}