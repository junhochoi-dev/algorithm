import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int sum = 0;
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			sum += Integer.parseInt(st.nextToken());
		}
		if(sum > 0){
			System.out.println("Right");
		} else if(sum < 0){
			System.out.println("Left");
		} else {
			System.out.println("Stay");
		}
	}
}