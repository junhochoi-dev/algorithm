import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int t1 = Integer.parseInt(st.nextToken());
		int e1 = Integer.parseInt(st.nextToken());
		int f1 = Integer.parseInt(st.nextToken());

		st = new StringTokenizer(br.readLine());
		int t2 = Integer.parseInt(st.nextToken());
		int e2 = Integer.parseInt(st.nextToken());
		int f2 = Integer.parseInt(st.nextToken());

		int max = t1 * 3 + e1 * 20 + f1 * 120;
		int mel = t2 * 3 + e2 * 20 + f2 * 120;
		if(max > mel) System.out.println("Max");
		if(max < mel) System.out.println("Mel");
		if(max == mel) System.out.println("Draw");
	}
}