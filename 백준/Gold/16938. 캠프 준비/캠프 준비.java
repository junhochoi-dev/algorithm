import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;
	static int N, L, R, X, answer = 0;
	static int[] arr;

	static void backtracking(int idx, int sum, int minimum, int maximum) {
		if (idx == N) {
			if (L <= sum && sum <= R && X <= maximum - minimum) {
				answer++;
			}
			return;
		}
		backtracking(idx + 1, sum + arr[idx], Math.min(minimum, arr[idx]), Math.max(maximum, arr[idx]));
		backtracking(idx + 1, sum, minimum, maximum);
	}

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		L = Integer.parseInt(st.nextToken());
		R = Integer.parseInt(st.nextToken());
		X = Integer.parseInt(st.nextToken());
		arr = new int[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		backtracking(0, 0, Integer.MAX_VALUE, Integer.MIN_VALUE);
		System.out.println(answer);
	}
}