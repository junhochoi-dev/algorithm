import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
		int N = Integer.parseInt(br.readLine());
		int[] arr = new int[N];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			int sum = 0, size = Integer.parseInt(st.nextToken());;
			for (int j = 0; j < size; j++) {
				sum += Integer.parseInt(st.nextToken());
			}
			arr[i] = sum;
		}
		Arrays.sort(arr);
		int answer = 0;
		for (int i = 0; i < N; i++) {
			answer += arr[i] * (N - i);
		}
		System.out.println(answer);
    }
}