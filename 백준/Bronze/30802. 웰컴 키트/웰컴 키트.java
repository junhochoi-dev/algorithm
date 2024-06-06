import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());

		st = new StringTokenizer(br.readLine());
		int[] size = new int[6];
		for (int i = 0; i < 6; i++) {
			size[i] = Integer.parseInt(st.nextToken());
		}

		st = new StringTokenizer(br.readLine());
		int T = Integer.parseInt(st.nextToken());
		int P = Integer.parseInt(st.nextToken());

		int sum = 0;
		for (int i = 0; i < 6; i++) {
			sum += size[i] / T + (size[i] % T == 0 ? 0 : 1);
		}
		System.out.println(sum);
		System.out.println(N / P + " " + N % P);
	}
}