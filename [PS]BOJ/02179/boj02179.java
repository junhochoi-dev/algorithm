import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int N = Integer.parseInt(br.readLine());

        HashMap<String, Integer> indexlist = new HashMap<>();
        HashMap<Integer, String> stringlist = new HashMap<>();

        String[] arr = new String[N];
        for(int i = 0; i < N; i++){
            arr[i] = br.readLine();
            if(!indexlist.containsKey(arr[i])){
                indexlist.put(arr[i], i);
            }
            stringlist.put(i, arr[i]);
        }

        Arrays.sort(arr);

        int answerCnt = 0;
        int answerIndex1 = Integer.MAX_VALUE;
        int answerIndex2 = Integer.MAX_VALUE;
        for(int i = 0; i < N; i++){
            int maxcnt = 0;
            for(int j = i + 1; j < N; j++){
                int index1 = Math.min(indexlist.get(arr[i]), indexlist.get(arr[j]));
                int index2 = Math.max(indexlist.get(arr[i]), indexlist.get(arr[j]));

                int cnt = 0;
                for(int k = 0; k < Math.min(arr[i].length(), arr[j].length()); k++){
                    if(arr[i].charAt(k) != arr[j].charAt(k)) break;
                    cnt++;
                }

                if(maxcnt > cnt) break;
                maxcnt = cnt;

                if(cnt == arr[i].length() && cnt == arr[j].length()) continue;

                if(answerCnt < cnt){
                    answerCnt = cnt;
                    answerIndex1 = index1;
                    answerIndex2 = index2;
                } else if(answerCnt == cnt){
                    if(answerIndex1 > index1){
                        answerIndex1 = index1;
                        answerIndex2 = index2;
                    } else if(answerIndex1 == index1) {
                        if(answerIndex2 > index2){
                            answerIndex2 = index2;
                        }
                    }
                }
            }
        }
        System.out.println(stringlist.get(answerIndex1));
        System.out.println(stringlist.get(answerIndex2));
    }
}