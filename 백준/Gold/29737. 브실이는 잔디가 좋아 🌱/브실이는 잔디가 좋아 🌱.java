import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static class BS implements Comparable<BS>{
        int streakbest;
        int streakfreeze;
        int streakstart;
        int streakfail;
        String name;

        public BS(int streakbest, int streakfreeze, int streakstart, int streakfail, String name) {
            this.streakbest = streakbest;
            this.streakfreeze = streakfreeze;
            this.streakstart = streakstart;
            this.streakfail = streakfail;
            this.name = name;
        }

        @Override
        public int compareTo(BS o) {
            if(this.streakbest != o.streakbest) return -Integer.compare(this.streakbest, o.streakbest);

            if(this.streakfreeze != o.streakfreeze) return Integer.compare(this.streakfreeze, o.streakfreeze);

            if(this.streakstart !=  o.streakstart) return Integer.compare(this.streakstart, o.streakstart);

            if(this.streakfail != o.streakfail) return Integer.compare(this.streakfail, o.streakfail);

            return this.name.compareTo(o.name);
        }


    }
    static boolean std_check(BS a, BS b){
        return a.streakbest == b.streakbest && a.streakfreeze == b.streakfreeze && a.streakstart == b.streakstart && a.streakfail == b.streakfail;
    }
    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int W = Integer.parseInt(st.nextToken());
        BS[] friends = new BS[N];
        for(int n = 0 ; n < N; n++){
            String nickname = br.readLine();
            char[][] streak = new char[7][W];
            for(int i = 0; i < 7; i++){
                String temp = br.readLine();
                for(int j = 0; j < W; j++){
                    streak[i][j] = temp.charAt(j);
                }
            }
            int streakbest = 0;
            int streakstart = Integer.MAX_VALUE;
            int streakfreeze = Integer.MAX_VALUE;

            int streakfail = 0;

            int curr_streak = 0;
            int curr_streak_start = Integer.MAX_VALUE;
            int curr_streak_freeze = 0;
            int curr_streak_freeze_range = 0;
            for(int j = 0; j < W; j++){
                for(int i = 0; i < 7; i++){
                    char curr = streak[i][j];
                    if(curr == 'X') {
                        // 초기화 전 갱신
                        if(curr_streak > streakbest){
                            streakbest = curr_streak;
                            streakstart = curr_streak_start;
                            streakfreeze = curr_streak_freeze;
                        }
                        if(curr_streak == streakbest){
                            if(curr_streak_freeze < streakfreeze){
                                streakstart = curr_streak_start;
                                streakfreeze = curr_streak_freeze;
                            }
                        }
                        streakfail++;
                        
                        // 초기화
                        curr_streak = 0;
                        curr_streak_freeze = 0;
                        curr_streak_freeze_range = 0;
                    }
                    if(curr == 'O'){
                        if(curr_streak == 0) curr_streak_start = i + j * 7;
                        curr_streak_freeze += curr_streak_freeze_range;
                        curr_streak_freeze_range = 0;
                        curr_streak++;
                    }
                    if (curr == 'F') {
                        if(curr_streak > 0) curr_streak_freeze_range++;
                    }
                }
            }
            // 끝나고 갱신
            if(curr_streak > streakbest){
                streakbest = curr_streak;
                streakstart = curr_streak_start;
                streakfreeze = curr_streak_freeze;
            }
            if(curr_streak == streakbest){
                if(curr_streak_freeze < streakfreeze){
                    streakstart = curr_streak_start;
                    streakfreeze = curr_streak_freeze;
                }
            }
            friends[n] = new BS(streakbest, streakfreeze, streakstart, streakfail, nickname);
        }
        Arrays.sort(friends);

        int rank = 1;
        for(int i = 0; i < N; i++){
            if(i - 1 >= 0 && !std_check(friends[i], friends[i - 1])) rank++;
            sb.append(rank).append(". ").append(friends[i].name).append('\n');
        }
        System.out.println(sb);
    }
}
