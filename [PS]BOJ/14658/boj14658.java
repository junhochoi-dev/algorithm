import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static class STAR{
        int x, y;
        public STAR(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        HashSet<Integer> row = new HashSet<>();
        HashSet<Integer> col = new HashSet<>();
        STAR[] stars = new STAR[K];
        for(int i = 0; i < K; i++){
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            stars[i] = new STAR(x, y);
            row.add(x); col.add(y);
        }
        int answer = 0;
        for(int r : row){
            for(int c : col){
                int count = 0;
                for(STAR star : stars){
                    if(!(r <= star.x && star.x <= r + L)){
                        continue;
                    }
                    if(!(c <= star.y && star.y <= c + L)){
                        continue;
                    }
                    count++;
                }
                answer = Math.max(answer, count);
            }
        }
        System.out.println(K - answer);
    }
}