import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine(), "/");
		int f = Integer.parseInt(st.nextToken());
		int s = Integer.parseInt(st.nextToken());
		if(f > 12) System.out.println("EU");
		else if(s > 12) System.out.println("US");
		else System.out.println("either");
	}
}