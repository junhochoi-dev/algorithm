import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Set<String> previous = new HashSet<String>();
        int N = Integer.parseInt(br.readLine());
        int idx = -1;
        String[] arr = new String[N];
        for(int i = 0; i < N; i++){
            String word = br.readLine();
            if(!"?".equals(word)) previous.add(word);
            else idx = i;
            arr[i] = word;
        }
        int M = Integer.parseInt(br.readLine());
        for(int i = 0; i < M; i++){
            String word = br.readLine();
            if(N == 1) {
                System.out.println(word);
                break;
            };
            if(previous.contains(word)) continue;
            if(idx == 0){
                if(arr[idx + 1].charAt(0) == word.charAt(word.length() - 1)){
                    System.out.println(word);
                    break;
                }
            }
            else if(idx == N - 1){
                if(arr[idx - 1].charAt(arr[idx - 1].length() - 1) == word.charAt(0)){
                    System.out.println(word);
                    break;
                }
            }
            else{
                if(arr[idx + 1].charAt(0) == word.charAt(word.length() - 1)
                        && arr[idx - 1].charAt(arr[idx - 1].length() - 1) == word.charAt(0)){
                    System.out.println(word);
                    break;
                }
            }
        }
    }
}
