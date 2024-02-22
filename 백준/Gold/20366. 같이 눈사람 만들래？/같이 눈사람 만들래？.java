import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        int[] snow = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            snow[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(snow);

        int answer = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int left = 0, right = N - 1;
                while (left < right) {
                    if (left == i || left == j) {
                        left++;
                        continue;
                    }
                    if (right == i || right == j) {
                        right--;
                        continue;
                    }
                    answer = Math.min(answer, Math.abs((snow[i] + snow[j]) - (snow[left] + snow[right])));
                    if (snow[left] + snow[right] > snow[i] + snow[j]) right--;
                    else left++;
                }
            }
        }
        System.out.println(answer);
    }
}