import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		HashMap<String, int[]> seniors = new HashMap<>();
		boolean[] days = new boolean[10 * 7 + 1];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			String name = st.nextToken();
			int w = Integer.parseInt(st.nextToken()) - 1;
			int d = Integer.parseInt(st.nextToken());
			int p = Integer.parseInt(st.nextToken());
			seniors.put(name, new int[]{w * 7 + d, p});
		}
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			String name = st.nextToken();
			int p = Integer.parseInt(st.nextToken());
			if(seniors.get(name)[1] <= p){
				days[seniors.get(name)[0]] = true;
			}
		}
		int answer = 0, curr = 0;
		for (int i = 0; i <= 10 * 7; i++) {
			if(days[i]) {
				curr++;
				answer = Math.max(answer, curr);
			} else {
				curr = 0;
			}
		}
		System.out.println(answer);
	}
}