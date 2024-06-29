import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;
    static class Meeting{
        int s, e;
        public Meeting(int s, int e) {
            this.s = s;
            this.e = e;
        }
    }
    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int T = Integer.parseInt(st.nextToken());
        ArrayList<Meeting> meetingList = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            meetingList.add(new Meeting(s, e));
        }
        int[] communication = new int[T];
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken()) - 1;
            int b = Integer.parseInt(st.nextToken()) - 1;

            int overlapS = Math.max(meetingList.get(a).s, meetingList.get(b).s);
            int overlapE = Math.min(meetingList.get(a).e, meetingList.get(b).e);
            if(overlapS < overlapE) {
                for (int j = overlapS; j < overlapE; j++) {
                    communication[j]++;
                }
            }
        }
        for (int i = 0; i < T; i++) {
            sb.append(communication[i]).append('\n');
        }
        System.out.println(sb);
    }
}