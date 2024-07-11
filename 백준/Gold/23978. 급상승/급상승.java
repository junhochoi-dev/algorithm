import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		long K = Long.parseLong(st.nextToken());
		st = new StringTokenizer(br.readLine());
		int[] days = new int[N];
		for (int i = 0; i < N; i++) {
			days[i] = Integer.parseInt(st.nextToken());
		}
		long answer = Integer.MAX_VALUE;
		long low = 1, high = Integer.MAX_VALUE;
		while (low <= high) {
			long mid = (low + high) / 2;
			long sum = mid * (mid + 1) / 2;
			for (int i = 0; i < N - 1; i++) {
				long diff = Math.min(mid, days[i + 1] - days[i]);
				sum += mid * diff - (diff - 1) * diff / 2;
			}
			if (sum >= K) {
				answer = Math.min(answer, mid);
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		System.out.println(answer);
	}
}