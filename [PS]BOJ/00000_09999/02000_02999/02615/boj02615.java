import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		//////////////////////////////////////////////////////////////
		// 테스트 후 아래 파일 입력을 표준입력으로 처리하는 문장은 주석 처리해주세요!!!! ( System.setIn처리 코드 )
		//////////////////////////////////////////////////////////////
		// System.setIn(new FileInputStream("Test5.txt"));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[][] table = new int[19][19];
		for(int i = 0; i < 19; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int j = 0; j < 19; j++) {
				table[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		// black == 1
		// white == 2
		int[][] dx = {{0, 1, 2, 3, 4}, {0, -1, -2, -3, -4}, {0, 1, 2, 3, 4}, {0, 0, 0, 0, 0}};
		int[][] dy = {{0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}, {0, 0, 0, 0, 0}, {0, 1, 2, 3, 4}};
		
		boolean blackwin = false;
		boolean whitewin = false;
		
		int ansx = -1;
		int ansy = -1;
		
		for(int i = 0; i < 19; i++) {
			for(int j = 0; j < 19; j++) {
				
				int std = table[i][j];
				if(std == 0) continue;
				
				// 4 set : \ / | -
				for(int k = 0; k < 4; k++) {
					boolean omok = true; // does it make omok?
					for(int t = 0; t < 5; t++) {
						int x = i + dx[k][t];
						int y = j + dy[k][t];
						if(x < 0 || y < 0 || x >= 19 || y >= 19) { // five check
							omok = false;
							break;
						}
						if(table[x][y] != std) { // omok check
							omok = false;
							break;
						}
					}
					if(omok) {
						boolean realomok = true;
						if(k == 0) { // \
							// back
							if(i - 1 >= 0 && j - 1 >= 0 && std == table[i - 1][j - 1]) realomok = false;
							// front
							if(i + 5 < 19 && j + 5 < 19 && std == table[i + 5][j + 5]) realomok = false;
						}
						if(k == 1) { // /
							// back
							if(i + 1 < 19 && j - 1 >= 0 && std == table[i + 1][j - 1]) realomok = false;
							// front
							if(i - 5 >= 0 && j + 5 < 19 && std == table[i - 5][j + 5]) realomok = false;
						}
						if(k == 2) { // |
							// back
							if(i - 1 >= 0 && std == table[i - 1][j]) realomok = false;
							// front
							if(i + 5 < 19 && std == table[i + 5][j]) realomok = false;
						}
						if(k == 3) { // -
							// back
							if(j - 1 >= 0 && std == table[i][j - 1]) realomok = false;
							// front
							if(j + 5 < 19 && std == table[i][j + 5]) realomok = false;
						}
						
						
						if(realomok) { // save ans
							if(std == 1) blackwin = true;
							if(std == 2) whitewin = true;
							ansx = i + 1;
							ansy = j + 1;
						}
					}
				}
			}
		}
		if(blackwin || whitewin) {
			if(blackwin) System.out.println(1);
			if(whitewin) System.out.println(2);
			System.out.println(ansx + " " + ansy);
		}
		else System.out.println(0);
	}
}
