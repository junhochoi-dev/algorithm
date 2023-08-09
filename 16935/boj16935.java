import java.io.*;
import java.util.*;

public class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, K;
    static int[][] origin = new int[1000][1000], temp = new int[1000][1000];

    static void move(){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                origin[i][j] = temp[i][j];
            }
        }
    }
    static void flipupdown(){
        for(int i = N - 1, k = 0; i >= 0; i--, k++){
            for(int j = 0; j < M; j++){
                temp[k][j] = origin[i][j];
            }
        }
        move();
    }
    static void flipleftright(){
        for(int i = 0; i < N; i++){
            for(int j = M - 1, k = 0; j >= 0; j--, k++){
                temp[i][k] = origin[i][j];
            }
        }
        move();
    }
    static void rotateleft(){
        for(int i = 0, n = M - 1; n >= 0; i++, n--){
            for(int j = 0, m = 0; m < N; j++, m++){
                temp[i][j] = origin[m][n];
            }
        }
        int tmp = N;
        N = M;
        M = tmp;
        move();
    }
    static void rotateright(){
        for(int i = 0, n = 0; n < M; i++, n++){
            for(int j = 0, m = N - 1; m >= 0; j++, m--){
                temp[i][j] = origin[m][n];
            }
        }
        int tmp = N;
        N = M;
        M = tmp;
        move();
    }
    static void rotateright4(){
        for(int i = 0; i < N / 2; i++){
            for(int j = 0, m = M / 2; j < M / 2; j++, m++){
                temp[i][m] = origin[i][j];
            }
        }
        for(int i = 0, n = N / 2; i < N / 2; i++, n++){
            for(int j = M / 2, m = M / 2; j < M; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }
        for(int i = N / 2, n = N / 2; i < N; i++, n++){
            for(int j = M / 2, m = 0; j < M; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }
        for(int i = N / 2, n = 0; i < N; i++, n++){
            for(int j = 0, m = 0; j < M / 2; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }

        move();
    }
    static void rotateleft4(){
        for(int i = 0, n = N / 2; i < N / 2; i++, n++){
            for(int j = 0, m = 0; j < M / 2; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }
        for(int i = N / 2, n = N / 2; i < N; i++, n++){
            for(int j = 0, m = M / 2; j < M / 2; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }
        for(int i = N / 2, n = 0; i < N; i++, n++){
            for(int j = M / 2, m = M / 2; j < M; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }
        for(int i = 0, n = 0; i < N / 2; i++, n++){
            for(int j = M / 2, m = 0; j < M; j++, m++){
                temp[n][m] = origin[i][j];
            }
        }
        move();
    }
    static void print(){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                System.out.print(origin[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                origin[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        st = new StringTokenizer(br.readLine());
        for(int k = 0; k < K; k++){
            int order = Integer.parseInt(st.nextToken());
            switch (order){
                case 1:
                    flipupdown();
                    break;
                case 2:
                    flipleftright();
                    break;
                case 3:
                    rotateright();
                    break;
                case 4:
                    rotateleft();
                    break;
                case 5:
                    rotateright4();
                    break;
                case 6:
                    rotateleft4();
                    break;
            }
        }
        print();
    }
}