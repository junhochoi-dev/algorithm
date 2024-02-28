import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    static class CONNTECTEDCAR {
        int loc, gas;

        public CONNTECTEDCAR(int loc, int gas) {
            this.loc = loc;
            this.gas = gas;
        }
    }

    public static void main(String[] args) throws IOException {
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(st.nextToken()) - 1;

        ArrayList<CONNTECTEDCAR> arr = new ArrayList<>();
        StringTokenizer st1 = new StringTokenizer(br.readLine());
        StringTokenizer st2 = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            int loc = Integer.parseInt(st1.nextToken());
            int gas = Integer.parseInt(st2.nextToken());
            arr.add(new CONNTECTEDCAR(loc, gas));
        }

        Queue<Integer> queue = new ArrayDeque<>();
        boolean[] visited = new boolean[N];
        int MNLOC = arr.get(S).loc, MXLOC = arr.get(S).loc;
        int MNIDX = S, MXIDX = S;
        queue.add(S);
        visited[S] = true;
        while (!queue.isEmpty()) {
            int curr = queue.poll();
            MNLOC = Math.min(MNLOC, arr.get(curr).loc - arr.get(curr).gas);
            MXLOC = Math.max(MXLOC, arr.get(curr).loc + arr.get(curr).gas);
            // left
            for (int left = MNIDX - 1; left >= 0; left--) {
                if (arr.get(left).loc < MNLOC) break;
                if (visited[left]) continue;

                MNIDX = Math.min(MNIDX, left);
                visited[left] = true;
                queue.add(left);
            }
            // right
            for (int right = MXIDX + 1; right < N; right++) {
                if (arr.get(right).loc > MXLOC) break;
                if (visited[right]) continue;

                MXIDX = Math.max(MXIDX, right);
                visited[right] = true;
                queue.add(right);
            }
        }
        for (int i = MNIDX; i <= MXIDX; i++) {
            sb.append(i + 1).append(" ");
        }
        System.out.println(sb);
    }
}