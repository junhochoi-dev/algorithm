import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int[] arr = new int[N];
		boolean[] num = new boolean[2_000_000 + 1];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
			num[arr[i]] = true;
		}
		int answer = 0;
		int X = Integer.parseInt(br.readLine());
		for (int i = 0; i < N; i++) {
			if(X - arr[i] <= 0) continue;
			if (num[X - arr[i]]) {
				answer++;
			}
		}
		System.out.println(answer / 2);
	}
}