import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int MAXIMUM = Integer.MIN_VALUE, MINIMUM = Integer.MAX_VALUE, answer = 0;
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			int val = Integer.parseInt(st.nextToken());
			if(MINIMUM > val){
				MINIMUM = val;
				MAXIMUM = val;
			} else {
				if(MAXIMUM < val) {
					MAXIMUM = val;
				}
			}
			answer = Math.max(answer, MAXIMUM - MINIMUM);
			sb.append(answer).append(' ');
		}
		System.out.println(sb);
	}
}