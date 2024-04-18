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
		int answer = 0;
		for (int i = 0; i < N; i++) {
			String str = br.readLine();
			int cnt = 0;
			for (int j = 0; j < M; j++) {
				if(str.charAt(j) == 'O') cnt++;
			}
			if(cnt > M / 2) answer++;
		}
		System.out.println(answer);
	}
}