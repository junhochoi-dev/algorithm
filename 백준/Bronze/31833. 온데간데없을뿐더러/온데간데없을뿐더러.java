import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		String tmpX = "", tmpY = "";
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			tmpX += st.nextToken();
		}
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			tmpY += st.nextToken();
		}
		System.out.println(Long.parseLong(tmpX) < Long.parseLong(tmpY) ? tmpX : tmpY);
	}
}