// java.util.* 라이브러리 import
import java.util.*;
//java.io.* 라이브러리 import
import java.io.*;

// start of class
public class Main {
    // 여러 출력의 시간 소모를 줄이기 위한 StringBuilder 호출
    static StringBuilder sb = new StringBuilder();
    // Assignment 클래스 선언
    static class Assignment{
        // 점수 멤버 변수
        int score;
        // 시간 멤버 변수
        int time;
        // 점수, 시간을 매개변수로 받는 생성자
        public Assignment(int score, int time) {
            // 매개변수 점수를 멤버변수 점수로 저장
            this.score = score;
            // 매개변수 시간을 멤버변수 시간으로 저장
            this.time = time;
        }
    }
    // start of main
    public static void main(String[] args) throws IOException {
        // 한 줄 입력을 위한 BufferedReader 호출
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // 한 줄을 delimeter로 split하여 변수를 가져오기 위한 StringTokenizer 호출
        StringTokenizer st;
        // 총 점수 변수
        int scoresum = 0;
        // N 입력
        int N = Integer.parseInt(br.readLine());
        // N 분 동안 주어진 업무 정보
        ArrayDeque<Assignment> stack = new ArrayDeque<Assignment>();
        // 현재 업무 시간 및 점수 변수 선언
        int curr_assignment_time = 0, curr_assignment_score = 0;

        for(int i = 0; i < N; i++) {
            // 한 줄 입력
            st = new StringTokenizer(br.readLine());
            //
            int assign = Integer.parseInt(st.nextToken());
            //
            if(assign == 1) {
                int new_assignment_time, new_assignment_score;
                // 새 업무 점수 입력
                new_assignment_score = Integer.parseInt(st.nextToken());
                // 새 업무 시간 입력
                new_assignment_time = Integer.parseInt(st.nextToken());
                // 현재 업무가 남아 있을 시 저장
                if(curr_assignment_time > 0) stack.addLast(new Assignment(curr_assignment_score, curr_assignment_time));
                // 새 업무 점수를 현재 업무 점수에 저장
                curr_assignment_score = new_assignment_score;
                // 새 업무 시간를 현재 업무 시간에 저장
                curr_assignment_time = new_assignment_time;
            }
            else {
                // 할일 이 없을 때 이전 업무 가져오기
                if(curr_assignment_time == 0 && !stack.isEmpty()) {
                    // 바로 최근에 저장한 업무 가져오기
                    Assignment previous_assignment = stack.pollLast();
                    // 최근 업무 점수 저장
                    curr_assignment_score = previous_assignment.score;
                    // 최근 업무 시간 저장
                    curr_assignment_time = previous_assignment.time;
                }
            }
            // 현재 업무가 남아 있을 때 업무를 이어서 하기
            if(curr_assignment_time > 0) curr_assignment_time--;
            // 현재 업무가 다 끝났을 때 점수 추가
            if(curr_assignment_time == 0) {
                // 점수 추가
                scoresum += curr_assignment_score;
                // 중복을 막기 위해 다 끝 업무 점수 0으로 초기화
                curr_assignment_score = 0;
            }
        }
        // 이번 분기 업무 평가 점수 호출
        System.out.println(scoresum);
    } // end of main
} // end of class
