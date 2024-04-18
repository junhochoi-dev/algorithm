import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		double W = Double.parseDouble(st.nextToken());
		double H = Double.parseDouble(st.nextToken());
		System.out.println(W * H / 2);
	}
}