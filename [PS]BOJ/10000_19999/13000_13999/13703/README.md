# [Gold V] 물벼룩의 생존확률 - 13703 

[문제 링크](https://www.acmicpc.net/problem/13703) 

### 성능 요약

메모리: 14392 KB, 시간: 120 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2024년 4월 18일 01:25:24

### 문제 설명

<p>수면에서 k 센티미터 아래에 있는 물벼룩은 1초마다 각각 1/2의 확률로 위 또는 아래로 1 센티미터 이동한다.  물벼룩은 수면에 닿자마자 기다리고 있던 물매암이들에 의해 먹혀 없어진다.  예를 들어, 수면아래 2 센티미터에 있던 물벼룩은 3초동안 "위위위, 위위아래, 위아래위, ..., 아래아래아래"의 8가지 방법으로 움직일 수 있고, 이 방법들의 확률은 모두 1/8로 같다.  이 중, "위위위, 위위아래"의 경우 2초만에 수면에 닿자마자 먹혀 없어진다.  그리고 나머지 6가지 경우에는 수면아래에 살아있게 되어, 3초후 생존확률은 6/8이다.  수면아래 k 센티미터에 있는 물벼룩이 n초후 생존할 확률이 S/2<sup>n</sup>일때 S를 계산하시오.</p>

### 입력 

 <p>첫째 줄에 k와 n이 주어진다. (0 <strong>≤</strong> k <strong>≤</strong> n <strong>≤</strong> 63)</p>

### 출력 

 <p>첫째 줄에 S를 출력한다.</p>
