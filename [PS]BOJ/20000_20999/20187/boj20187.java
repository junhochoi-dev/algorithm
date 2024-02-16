import java.util.*;
import java.io.*;

public class Main{
	// 출력값을 모아서 출력하기 위한 StringBuilder 호출
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws IOException {
		// 입력을 위한 BufferedReader, InputStreamReader 호출
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		// 한 줄에 여러 변수를 입력을 위한 StringTokenizer 호출
		StringTokenizer st;
		int K = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		// 왼쪽 위 칸을 기준
		char lr = 'L';
		char ud = 'U';
		for(int i = 0; i < (1 << K); i++) {
			char order = st.nextToken().charAt(0);
			// 기준 좌우 전환
			if(order == 'L' || order == 'R') {
				if(order != lr) lr = order;
			}
			// 기준 위 아래 전환
			if(order == 'U' || order == 'D') {
				if(order != ud) ud = order;
			}
		}
		int h = Integer.parseInt(br.readLine());
		// 찍는 점 위치에 따라 위 아래 / 좌 우 전환
		if(h == 1) lr = (lr == 'R' ? 'L' : 'R');
		if(h == 2) ud = (ud == 'D' ? 'U' : 'D');
		if(h == 3) {
			lr = (lr == 'R' ? 'L' : 'R');
			ud = (ud == 'D' ? 'U' : 'D');
		}
		int[][] std = {{0, 1}, {2, 3}};
		// 기준 좌 우 전환
		if(lr == 'R') {
			int tmp = std[0][0];
			std[0][0] = std[0][1];
			std[0][1] = tmp;
			tmp = std[1][0];
			std[1][0] = std[1][1];
			std[1][1] = tmp;
		}
		// 기준 위 아래 전환
		if(ud == 'D') {
			int tmp = std[0][0];
			std[0][0] = std[1][0];
			std[1][0] = tmp;
			tmp = std[0][1];
			std[0][1] = std[1][1];
			std[1][1] = tmp;
		}
		// StringBuilder에 저장
		for(int i = 0; i < (1 << (K - 1)); i++) {
			for(int j = 0; j < (1 << (K - 1)); j++) {
				sb.append(std[0][0]).append(" ").append(std[0][1]).append(" ");
			}
			sb.append("\n");
			for(int j = 0; j < (1 << (K - 1)); j++) {
				sb.append(std[1][0]).append(" ").append(std[1][1]).append(" ");
			}
			sb.append("\n");
		}
		// StringBuilder을 호출하여 출력
		System.out.println(sb);
	}
}
