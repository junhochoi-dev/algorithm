import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		int[] tanghulu = new int[N];
		for (int i = 0; i < N; i++) {
			tanghulu[i] = Integer.parseInt(st.nextToken());
		}
		int answer = 1, left = 0, right = 0;
		int[] count = new int[10];
		count[tanghulu[0]]++;
		while (left <= right) {
			int kind = 0, sum = 0;
			for (int i = 1; i < 10; i++) {
				if (count[i] > 0) {
					kind++;
				}
				sum += count[i];
			}
			if (kind <= 2) {
				answer = Math.max(answer, sum);
			}
			// Right++
			// Left == Right // kind < 2 // kind == 2 !kind++
			if (left == right || (kind < 2) || (right + 1 != N && kind == 2 && count[tanghulu[right + 1]] != 0)) {
				if (right + 1 == N) {
					break;
				}
				count[tanghulu[++right]]++;
			} else { // Left++
				count[tanghulu[left++]]--;
			}
		}
		System.out.println(answer);
	}
}