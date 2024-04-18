import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());

		int answer = 0;
		String[] question = new String[N];
		for (int i = 0; i < N; i++) {
			question[i] = br.readLine();
		}
		for (int i = 0; i < N; i++) {
			if(question[i].equals(br.readLine())){
				answer++;
			}
		}
		System.out.println(answer);
	}
}