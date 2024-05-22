import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		while(true){
			st = new StringTokenizer(br.readLine());
			int init = Integer.parseInt(st.nextToken());
			char type = st.nextToken().charAt(0);
			int price = Integer.parseInt(st.nextToken());
			if(init == 0 && type == 'W' && price == 0) break;
			if(type == 'W') {
				if(init - price < -200) sb.append("Not allowed").append('\n');
				else sb.append(init - price).append('\n');
			} else {
				sb.append(init + price).append('\n');
			}
		}
		System.out.println(sb);
	}
}