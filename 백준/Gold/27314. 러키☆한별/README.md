# [Gold III] 러키☆한별 - 27314 

[문제 링크](https://www.acmicpc.net/problem/27314) 

### 성능 요약

메모리: 559540 KB, 시간: 1452 ms

### 분류

너비 우선 탐색, 브루트포스 알고리즘, 그래프 이론, 그래프 탐색

### 제출 일자

2024년 2월 5일 07:50:29

### 문제 설명

<p>한별이는 운이 매우 좋다!</p>

<p>한별이는 벽, 다른 사람들, 그리고 여러 개의 출구가 있는 미로를 탈출하고자 한다.</p>

<p>미로 내에서 한별이와 다른 사람들은 매 순간 상하좌우 중 한 방향으로 한 칸 이동할 수 있다. 또, 한별이가 아닌 다른 사람들은 멈춰있을 수도 있다. 벽이 있는 칸으로 이동하거나 미로 격자 밖으로 나가는 것은 불가능하다. 여러 명이 같은 칸에 있는 것은 가능하다.</p>

<p>한별이를 제외한 사람들은 모두 한별이에게 줄 선물을 하나씩 가지고 있다. 만약 한별이와 선물을 가진 사람이 같은 칸에 있으면, 그 사람은 한별이에게 선물을 준다.</p>

<p>한별이는 한별이가 도달할 수 있는 미로의 출구 중 하나를 골라 이로 향하는 최단경로 중 하나를 고르고, 이를 따라 이동한다. 한별이를 제외한 다른 사람들은 한별이의 경로를 알고, 한별이에게 선물을 주기 위한 최적의 경로로 이동한다.</p>

<p>한별이가 어떤 칸에서 다른 칸으로 이동하면, 도착한 칸에 이미 있던 사람들과, 그 칸에 한별이와 동시에 도착한 사람들에게 선물을 받는다. 그 뒤 만약 도착한 칸이 한별이가 처음에 정한 출구면, 즉시 미로를 탈출한다. 다른 사람들은 어떤 출구에 도착해도 미로를 탈출하지 않는다.</p>

<p>한별이는 운이 매우 좋기 때문에, 항상 가능한 최대의 선물을 받는다. 한별이가 출구와 최단경로를 적절히 고르고, 사람들이 적절히 움직였을 때 한별이가 받을 수 있는 선물의 최대 개수를 구하시오.</p>

### 입력 

 <p>첫 번째 줄에 미로의 높이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>과 너비 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$M$</span></mjx-container>이 공백으로 구분되어 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>,</mo><mi>M</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \leq N, M$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-cD7"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>×</mo><mi>M</mi><mo>≤</mo><mn>100</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N \times M \leq 100\, 000$</span></mjx-container>)</p>

<p>다음 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 줄에 미로의 정보가 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$M$</span></mjx-container>인 문자열로 주어진다.</p>

<p>문자열에서 <code>H</code>는 한별이를 뜻하고, 미로 안에 정확히 한 번 나타난다.</p>

<p>문자열에서 <code>P</code>는 한별이가 아닌 다른 사람을 뜻하고, 미로 안에 최소 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container>번, 최대 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>100</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$100$</span></mjx-container>번 나타난다.</p>

<p>문자열에서 <code>#</code>은 출구를 뜻하고, 미로 안에 최대 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>100</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$100$</span></mjx-container>번 나타난다.</p>

<p>문자열에서 <code>.</code>는 빈 공간을 뜻한다.</p>

<p>문자열에서 <code>X</code>는 벽을 뜻한다.</p>

<p>한별이가 도달할 수 있는 출구가 하나 이상 존재함이 보장된다.</p>

### 출력 

 <p>한별이가 받을 수 있는 선물의 최대 개수를 출력한다.</p>

