import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static char[][] arr;
    static HashSet<Integer> student, teacher, barrier;
    static boolean studentCheck(int curr){
        int x = curr / N;
        int y = curr % N;
        for(int k = 0; k < 4; k++){
            int tx = x;
            int ty = y;
            while(true){
                tx += dx[k];
                ty += dy[k];
                int next = tx * N + ty;
                if(tx < 0 || ty < 0 || tx >= N || ty >= N) break;
                if(barrier.contains(next)) break;
                if(teacher.contains(next)) break;
                if(arr[tx][ty] == 'S') return false;
            }
        }
        return true;
    }
    static boolean backtracking(){
        for(int n = 0; n < N * N; n++){
            if(student.contains(n) || teacher.contains(n)) continue;
            barrier.add(n);
            for(int m = n + 1; m < N * N; m++){
                if(student.contains(m) || teacher.contains(m)) continue;
                barrier.add(m);
                for(int o = m + 1; o < N * N; o++){
                    if(student.contains(o) || teacher.contains(o)) continue;
                    barrier.add(o);
                    boolean able = true;
                    for(int t: teacher){
                        if(!studentCheck(t)) {
                            able = false;
                        }
                    }
                    if(able) return true;
                    barrier.remove(o);
                }
                barrier.remove(m);
            }
            barrier.remove(n);
        }
        return false;
    }
    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        arr = new char[N][N];
        student = new HashSet<Integer>();
        teacher = new HashSet<Integer>();
        barrier = new HashSet<Integer>();
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < N; j++){
                arr[i][j] = st.nextToken().charAt(0);
                if(arr[i][j] == 'T') teacher.add(i * N + j);
                if(arr[i][j] == 'S') student.add(i * N + j);
            }
        }
        System.out.println(backtracking() ? "YES" : "NO");
    }
}
