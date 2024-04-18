import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int X = Integer.parseInt(st.nextToken());

		int sum = 0;
		int[] arr = new int[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
			if(i < X) sum += arr[i];
		}
		int answer = sum, count = 1;
		for (int i = 0, j = X; j < N; i++, j++) {
			sum -= arr[i];
			sum += arr[j];
			if(answer == sum){
				count++;
			}
			if(answer < sum){
				answer = sum;
				count = 1;
			}
		}
		System.out.print(answer == 0 ? "SAD" : (answer + "\n" + count));
	}
}