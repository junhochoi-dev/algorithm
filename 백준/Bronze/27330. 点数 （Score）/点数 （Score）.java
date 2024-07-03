import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int[] score = new int[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			score[i] = Integer.parseInt(st.nextToken());
		}
		HashSet<Integer> initialScore = new HashSet<>();
		int M = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < M; i++) {
			initialScore.add(Integer.parseInt(st.nextToken()));
		}
		int answer = 0;
		for (int i = 0; i < N; i++) {
			answer += score[i];
			if (initialScore.contains(answer))
				answer = 0;
		}
		System.out.println(answer);
	}
}