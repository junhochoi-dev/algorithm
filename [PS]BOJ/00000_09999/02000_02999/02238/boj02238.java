import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int U = Integer.parseInt(st.nextToken());
		int N = Integer.parseInt(st.nextToken());

		int[] price = new int[U + 1];
		String[] name = new String[U + 1];

		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			String n = st.nextToken();
			int p = Integer.parseInt(st.nextToken());
			price[p]++;
			if(price[p] == 1){
				name[p] = n;
			}
		}
		int mincnt = Integer.MAX_VALUE;
		for (int i = 0; i <= U; i++) {
			if(price[i] != 0) {
				mincnt = Math.min(mincnt, price[i]);
			}
		}
		for (int i = 0; i <= U; i++) {
			if (price[i] == mincnt) {
				System.out.println(name[i] + " " + i);
				break;
			}
		}
	}
}