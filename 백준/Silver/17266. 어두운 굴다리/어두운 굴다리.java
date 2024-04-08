import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int M = Integer.parseInt(br.readLine());

		int answer = 0;

		int[] arr = new int[M];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < M; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}

		answer = Math.max(arr[0], N - arr[arr.length - 1]);
		for (int i = 0; i < M - 1; i++) {
			int gap = arr[i + 1] - arr[i];
			answer = Math.max(answer, gap % 2 == 0 ? gap / 2 : gap / 2 + 1);
		}
		System.out.println(answer);
	}
}