import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine(), "-");
		int y = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		int d = Integer.parseInt(st.nextToken());
		d += Integer.parseInt(br.readLine());
		while (d > 30) {
			d -= 30;
			m++;
		}
		while (m > 12) {
			m -= 12;
			y++;
		}
		System.out.print(y);
		System.out.print("-");
		System.out.print(m / 10 == 0 ? "0" + m : m);
		System.out.print("-");
		System.out.print(d / 10 == 0 ? "0" + d : d);
	}
}