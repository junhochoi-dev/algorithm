import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());

		int curr = 0, maximum = 0, minimum = 0;
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			int direction = Integer.parseInt(st.nextToken());
			if(direction == 1) curr++;
			if(direction == 2) curr--;
			maximum = Math.max(maximum, curr);
			minimum = Math.min(minimum, curr);
		}
		System.out.println(maximum - minimum);
	}
}