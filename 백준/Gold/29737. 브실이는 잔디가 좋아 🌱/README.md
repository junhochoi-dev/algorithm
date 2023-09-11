# [Gold V] 브실이는 잔디가 좋아 🌱 - 29737 

[문제 링크](https://www.acmicpc.net/problem/29737) 

### 성능 요약

메모리: 15036 KB, 시간: 144 ms

### 분류

구현, 정렬

### 문제 설명

<p style="text-align: center;"><img alt="" src="" style="max-width: 100%; height: 229px; width: 400px;"></p>

<p>문제를 풀기 전 스트릭과 스트릭 프리즈에 대해서 알아보자!</p>

<blockquote>
<p><strong>스트릭(Streak)</strong>이란?</p>
</blockquote>

<p style="text-align: center;"><img alt="" src="" style="width: 100px; height: 100px;"></p>

<p>스트릭은 연속해서 문제를 푼 날의 수를 의미한다. 한 문제를 풀어서 <span class="result-ac">맞았습니다!!</span> 결과를 얻게 되면 당일 스트릭을 달성한다. 스트릭은 매일 연속으로 한 문제 이상을 <span class="result-ac">맞았습니다!!</span> 결과를 받아야 증가하며, 문제를 풀지 못한 시점부터 스트릭은 다시 0(일)으로 초기화된다. 연속해서 문제를 푼 날의 수가 많을 수록 스트릭의 길이가 길며, 길이가 가장 긴 스트릭을 최장 스트릭이라고 한다.</p>

<blockquote>
<p><strong>스트릭 프리즈(Streak Freeze)</strong>란?</p>
</blockquote>

<p style="text-align: center;"><img alt="스트릭 프리즈" src="" style="height: 100px; width: 100px;"></p>

<p><a href="https://solved.ac/coin/shop">solved.ac 코인샵</a>에서 문제를 풀어 별조각을 모아 구매할 수 있는 아이템이다. 미리 이 아이템을 사둔다면 당일에 한 문제도 못 풀어도 스트릭을 0(일)으로 초기화되는 것을 막아준다. 하지만 초기화가 되는 것을 막아줄 뿐, 당일 스트릭 길이는 증가하지 않는다.</p>

<p>브실이는 대한민국 최강 코딩 마스터가 되기 위해 오늘도 하루에 한 문제 이상을 푸는 오스완(오늘 스트릭 완료)을 해야 한다. 브실이는 동기부여를 받기 위해 <a href="https://solved.ac/">solved.ac</a>에 있는 <a href="https://solved.ac/ranking/streak">최장 스트릭 랭킹</a>을 보았다. 동기부여를 받기는커녕 자신감만 잃은 브실이는 친구들의 스트릭을 보고, 순위를 매겨보기로 했다. 브실이 친구들이 특정 기간 동안 문제를 푼 결과가 주어질 때 해당 기간 브실이 친구들의 순위를 매겨 보자! </p>

<p>브실이는 아래의 우선순위를 차례대로 적용하여 친구들의 순위를 매긴다.</p>

<ol>
	<li>가장 긴 최장 스트릭을 가진 친구</li>
	<li>최장 스트릭 내의 더 적은 개수의 스트릭 프리즈를 사용한 친구</li>
	<li>최장 스트릭을 시작한 날짜가 더 이른 친구</li>
	<li>스트릭 프리즈 사용한 날짜를 제외하고 스트릭 달성에 실패한 날짜 수가 적은 친구</li>
</ol>

<p>단, 최장 스트릭은 스트릭 프리즈로 시작하거나 끝날 수 없다.</p>

<p>위 순위 결정에도 순위가 같다면 순위는 같게 하고 닉네임의 사전 순으로 출력하며 그다음 순위는 이전 순위에 1을 더한 값으로 한다. 한 친구의 최장 스트릭이 여럿일 경우에는 가능한 한 우선순위가 높도록 하는 것을 고른다. 이때 선택되는 최장 스트릭은 유일하다. 문제를 푼 결과는 알파벳 대문자 <span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;"><code>O</code></span>, <span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;"><code>X</code></span>, <code><span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;">F</span></code>로 주어지며, <span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;"><code>O</code></span>는 문제 해결 성공, <code><span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;">X</span></code>는 문제 해결 실패, <code><span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;">F</span></code>는 스트릭 프리즈를 나타낸다.</p>

### 입력 

 <p>첫 번째 줄에는 브실이의 친구 수 $N$과 스트릭 기간에 포함된 주 수 $W$가 공백으로 구분되어 주어진다. $(1 \le N, W \le 100)$</p>

<p>두 번째 줄부터는 $N$명의 브실이 친구들이 문제를 푼 결과가 각자의 아이디와 함께 주어진다.</p>

<p>정보의 첫 번째 줄에는 브실이 친구의 아이디 $S$가 주어지며, 두 번째 줄부터 친구의 스트릭이 가로 $W$줄 세로 $7$줄 $7 \times W$ 형태로 주어진다. $i$행 $j$열은 $7j + i + 1$번째 날을 나타낸다.</p>

<p>친구들의 아이디 $S$는 중복이 없으며, $S$는 알파벳 소문자로만 이루어진 $1$ 이상 $100$ 이하의 문자열이다.</p>

### 출력 

 <p>$N$개의 줄에 걸쳐, 본문에서 정의한 우선순위로 정렬된 브실이 친구들의 순위와 닉네임을 <span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;"><code>"{순위}. {닉네임}"</code></span>의 형식으로 출력한다.</p>

