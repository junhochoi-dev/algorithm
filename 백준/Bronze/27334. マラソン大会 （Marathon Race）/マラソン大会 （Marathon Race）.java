import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int[] arr = new int[N];
		int[] rank = new int[N];
		int[] answer = new int[1000 + 1];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			rank[i] = arr[i] = Integer.parseInt(st.nextToken());
		}
		Arrays.sort(rank);
		int ranking = 0;
		for (int i = 0; i < N; i++) {
			ranking++;
			if(i != 0 && rank[i] == rank[i - 1]) continue;
			answer[rank[i]] = ranking;
		}
		for (int i = 0; i < N; i++) {
			System.out.println(answer[arr[i]]);
		}
	}
}