import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static int N, maximumScore = 0;
    static int[] sequence = new int[9];
    static HashSet<Integer> visited = new HashSet<Integer>();
    static ArrayList<ArrayList<Integer>> player = new ArrayList<ArrayList<Integer>>();

    static void next_permutation(int index){
        for(int i = 0; i < 9; i++){
            if(visited.contains(i)) continue;
            visited.add(i);
            sequence[index] = i;
            if(index == 8) {
                int score = 0;
                int playerIndex = 0;
                for(int j = 0; j < N; j++){
                    int base1 = 0, base2 = 0, base3 = 0;
                    int out = 0;
                    while(true){
                        if(playerIndex == 9) playerIndex = 0;
                        int curr = player.get(sequence[playerIndex++]).get(j);
                        if(curr == 0) {
                            out++;
                            if(out == 3) break;
                            continue;
                        }
                        if(curr == 1){
                            score += base3;
                            base3 = base2;
                            base2 = base1;
                            base1 = 1;
                        }
                        if(curr == 2){
                            score += base3 + base2;
                            base3 = base1;
                            base2 = 1;
                            base1 = 0;
                        }
                        if(curr == 3){
                            score += base3 + base2 + base1;
                            base3 = 1;
                            base2 = base1 = 0;
                        }
                        if(curr == 4){
                            score += base3 + base2 + base1 + 1;
                            base1 = base2 = base3 = 0;
                        }
                    }
                }
                maximumScore = Math.max(maximumScore, score);
            }
            else {
                if(index == 2) next_permutation(index + 2);
                else next_permutation(index + 1);
            }
            visited.remove(i);
        }
    }
    public static void main(String[] args) throws Exception {
        N = Integer.parseInt(br.readLine());
        for(int i = 0; i < 9; i++) player.add(new ArrayList<Integer>());

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < 9; j++){
                player.get(j).add(Integer.parseInt(st.nextToken()));
            }
        }

        sequence[3] = 0;
        visited.add(0);
        next_permutation(0);
        System.out.println(maximumScore);
    }
}
