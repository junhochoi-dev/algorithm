import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());

		int[] arr = new int[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++)
			arr[i] = Integer.parseInt(st.nextToken());

		int answer = 0;
		int left = 0, right = N - 1;
		while (left < right) {
			int curr = Math.min(arr[left], arr[right]) * (right - left - 1);
			answer = Math.max(answer, curr);
			if (arr[left] < arr[right]) {
				left++;
			} else {
				right--;
			}
		}
		System.out.println(answer);
	}
}