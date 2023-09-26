import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static Integer[][] sudoku = new Integer[9][9];

    static boolean able(int curr, int num){
        int x = curr / 9;
        int y = curr % 9;
        for (int i = x / 3 * 3; i < x / 3 * 3 + 3; i++) {
            for (int j = y / 3 * 3; j < y / 3 * 3 + 3; j++) {
                if(sudoku[i][j] == num) return false;
            }
        }
        for (int i = 0; i < 9; i++) {
            if(sudoku[i][y] == num && i != x) return false;
            if(sudoku[x][i] == num && i != y) return false;
        }
        return true;
    }
    static boolean backtracking(int curr){
        if(curr == 81) return true;
        int x = curr / 9;
        int y = curr % 9;
        if(sudoku[x][y] != 0) return backtracking(curr + 1);
        for(int i = 1; i <= 9; i++){
            if(able(curr, i)){
                sudoku[x][y] = i;
                if(backtracking(curr + 1)){
                    return true;
                }
                sudoku[x][y] = 0;
            }
        }
        return false;
    }

    public static void main(String[] args) throws Exception {
        for (int i = 0; i < 9; i++) {
            String temp = br.readLine();
            for (int j = 0; j < 9; j++) {
                sudoku[i][j] = temp.charAt(j) - '0';
            }
        }
        backtracking(0);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                sb.append(sudoku[i][j]);
            }
            sb.append('\n');
        }
        System.out.println(sb);
    }
}