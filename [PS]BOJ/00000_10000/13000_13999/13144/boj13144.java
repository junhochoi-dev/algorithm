import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());

		int[] visited = new int[100_000 + 1];
		int[] arr = new int[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}

		long answer = 0;
		visited[arr[0]]++;

		int left = 0, right = 0;
		while (left <= right) {
			if (right + 1 < N) {
				if (visited[arr[right + 1]] > 0) {
					answer += right - left + 1;
					if (left == right) {
						visited[arr[++right]]++;
					}
					visited[arr[left++]]--;
				} else {
					visited[arr[++right]]++;
				}
			} else {
				answer += right - left + 1;
				visited[arr[left++]]--;
			}
		}
		System.out.println(answer);
	}
}