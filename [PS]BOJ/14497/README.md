# [Gold IV] 주난의 난(難) - 14497 

[문제 링크](https://www.acmicpc.net/problem/14497) 

### 성능 요약

메모리: 306320 KB, 시간: 1208 ms

### 분류

0-1 너비 우선 탐색, 데이크스트라, 그래프 이론, 그래프 탐색

### 문제 설명

<p>주난이는 크게 화가 났다. 책상 서랍 안에 몰래 먹으려고 숨겨둔 초코바가 사라졌기 때문이다. 주난이는 미쳐 날뛰기 시작했다. 사실, 진짜로 뛰기 시작했다.</p>

<p>‘쿵... 쿵...’</p>

<p>주난이는 점프의 파동으로 주변의 모든 친구들을 쓰러뜨리고(?) 누군가 훔쳐간 초코바를 찾으려고 한다. 주난이는 N×M크기의 학교 교실 어딘가에서 뛰기 시작했다. 주난이의 파동은 상하좌우 4방향으로 친구들을 쓰러뜨릴(?) 때 까지 계속해서 퍼져나간다. 다르게 표현해서, 한 번의 점프는 한 겹의 친구들을 쓰러뜨린다. 다음의 예를 보자.</p>

<pre>1 # 1 0 1 1 1
1 1 0 1 0 0 1
0 0 1 * 1 1 1
1 1 0 1 1 1 1
0 0 1 1 0 0 1</pre>

<p>주난이를 뜻하는 *은 (3, 4)에 있고, 초코바를 가진 학생 #는 (1, 2)에 있다. 0은 장애물이 없는 빈 공간임을 뜻하고, 1은 친구들이 서있음을 의미한다. 다음은 주난이의 점프에 따른 생존(?) 학생들의 변화이다.</p>

<pre>1 # 1 0 1 1 1
1 1 0 0 0 0 1
0 0 0 * 0 1 1
1 1 0 0 1 1 1
0 0 1 1 0 0 1</pre>

<p> </p>

<pre>1 # 0 0 0 0 1
0 0 0 0 0 0 0
0 0 0 * 0 0 1
0 0 0 0 0 1 1
0 0 0 0 0 0 1</pre>

<p> </p>

<pre>0 X 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 * 0 0 0
0 0 0 0 0 0 1
0 0 0 0 0 0 0</pre>

<p>위의 예시에서 주난이는 3번의 점프 만에 초코바를 훔쳐간 범인을 찾아낼 수 있다!</p>

<p>주난이를 빨리 멈춰야 교실의 안녕을 도모할 수 있다. 주난이에게 최소 점프 횟수를 알려줘서 교실을 지키자.</p>

### 입력 

 <p>첫째 줄에 주난이가 위치한 교실의 크기 N, M이 주어진다. (1 ≤ N, M ≤ 300)</p>

<p>둘째 줄에 주난이의 위치 x1, y1과 범인의 위치 x2, y2가 주어진다. (1 ≤ x1, x2 ≤ N, 1 ≤ y1, y2 ≤ M)</p>

<p>이후 N×M 크기의 교실 정보가 주어진다. 0은 빈 공간, 1은 친구, *는 주난, #는 범인을 뜻한다.</p>

### 출력 

 <p>주난이가 범인을 잡기 위해 최소 몇 번의 점프를 해야 하는지 출력한다.</p>
