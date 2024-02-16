import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(br.readLine());
        for (int t = 1; t <= T; t++) {
            int[] arr = new int[3];
            st = new StringTokenizer(br.readLine());
            arr[0] = Integer.parseInt(st.nextToken());
            arr[1] = Integer.parseInt(st.nextToken());
            arr[2] = Integer.parseInt(st.nextToken());

            Arrays.sort(arr);
            sb.append("Case #").append(t).append(": ");
            if(arr[0] + arr[1] <= arr[2]) sb.append("invalid!");
            else if(arr[0] == arr[1] && arr[1] == arr[2]) sb.append("equilateral");
            else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0]) sb.append("isosceles");
            else sb.append("scalene");
            sb.append('\n');
        }
        System.out.println(sb);
    }
}
