import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		int[] price = new int[N];
		for (int i = 0; i < N; i++) {
			price[i] = Integer.parseInt(br.readLine());
		}
		int low = 1;
		int high = 100_000 * 10_000;
		int answer = Integer.MAX_VALUE;
		while(low <= high){
			int mid = (low + high) / 2;
			boolean able = true;
			int count = 0, wallet = 0;
			for(int i = 0; i < N; i++){
				if(mid < price[i]){
					able = false;
					break;
				}
				if(wallet < price[i]){
					wallet = mid;
					count++;
				}
				wallet -= price[i];
			}
			if(!able || count > M) {
				low = mid + 1;
			} else {
				answer = Math.min(answer, mid);
				high = mid - 1;
			}
		}
		System.out.println(answer);
	}
}