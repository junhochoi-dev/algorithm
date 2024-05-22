import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M =	Integer.parseInt(st.nextToken());
		char[][] time = new char[N][M];
		for (int i = 0; i < N; i++) {
			String temp = br.readLine();
			for (int j = 0; j < M; j++) {
				time[i][j] = temp.charAt(j);
			}
		}
		int answer = -1;
		for (int i = 0; i < M; i++) {
			int count = 0;
			for (int j = 0; j < N; j++) {
				if(time[j][i] == 'X') {
					count++;
				}
			}
			if(count == N) {
				answer = i;
				break;
			}
		}
		System.out.println(answer == -1 ? "ESCAPE FAILED" : answer + 1);
	}
}