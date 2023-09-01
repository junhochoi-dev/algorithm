# [Gold IV] 떡 돌리기 - 20007 

[문제 링크](https://www.acmicpc.net/problem/20007) 

### 성능 요약

메모리: 95488 KB, 시간: 720 ms

### 분류

데이크스트라, 그래프 이론

### 문제 설명

<p>군인인 성현이는 전역 후에 새 집으로 이사를 갔다. 주변 이웃과 친하게 지내고 싶은 마음에 이웃집에 떡을 돌리기로 했다. 떡은 한번에 하나씩만 들고 갈 수 있다. 집들 사이에는 총 M개의 양방향 도로가 있다. 귀찮은 성현이는 하루에 X보다 먼 거리를 걷지 않고 거리가 가까운 집부터 방문한다. 또 잠은 꼭 본인 집에서 자야 하므로 왕복할 수 없는 거리는 다음날 가기로 다짐한다. N-1개의 이웃집 모두에게 떡을 돌리기 위해서는 최소 며칠이 소요될 것인가.</p>

<p>집의 번호는 0번부터 N-1번까지 차례대로 붙어있다.</p>

<div id="dicLayer" style="color: rgb(0, 0, 0); font-size: 12px; font-family: Arial; background: -webkit-linear-gradient(bottom, rgb(255, 235, 0), rgb(255, 220, 0)); width: 400px; height: 150px; display: none; --darkreader-inline-color: #e8e6e3; --darkreader-inline-bgimage: -webkit-linear-gradient(bottom, #998d00, #998400); --darkreader-inline-bgcolor: initial;" data-darkreader-inline-color="" data-darkreader-inline-bgimage="" data-darkreader-inline-bgcolor="">
<div id="dicLayerContents"> </div>

<div id="dicLayerSub"> </div>
</div>

<div id="dicRawData" style="display: none;"> </div>

### 입력 

 <p>첫째줄에 N, M, X, Y가 공백으로 구분되어 입력된다. (2 ≤ N ≤ 1,000, 1 ≤ M ≤ 100,000, 1 ≤ X ≤ 10,000,000, 0 ≤ Y < N)</p>

<p>두번째 줄부터 M+1번째 줄까지 A와 B 그리고 A집과 B집 사이의 도로의 길이 C가 주어진다. (0 ≤ A,B < N, 1 ≤ C ≤ 10,000) 단, A와 B는 서로 다른 수이고, C는 정수이다.</p>

<p>단, A집과 B집을 연결하는 도로는 유일하다.</p>

<div id="dicLayer" style="color: rgb(0, 0, 0); font-size: 12px; font-family: Arial; background: -webkit-linear-gradient(bottom, rgb(255, 235, 0), rgb(255, 220, 0)); width: 400px; height: 150px; display: none; --darkreader-inline-color: #e8e6e3; --darkreader-inline-bgimage: -webkit-linear-gradient(bottom, #998d00, #998400); --darkreader-inline-bgcolor: initial;" data-darkreader-inline-color="" data-darkreader-inline-bgimage="" data-darkreader-inline-bgcolor="">
<div id="dicLayerContents"> </div>

<div id="dicLayerSub"> </div>
</div>

<div id="dicRawData" style="display: none;"> </div>

### 출력 

 <p>성현이의 집을 Y 라고 할 때, 이웃집 모두에 떡을 돌리기 위한 최소 일을 출력한다. 만약 모두 방문할수 없으면 -1을 출력한다.</p>

<div id="dicLayer" style="color: rgb(0, 0, 0); font-size: 12px; font-family: Arial; background: -webkit-linear-gradient(bottom, rgb(255, 235, 0), rgb(255, 220, 0)); width: 400px; height: 150px; display: none; --darkreader-inline-color: #e8e6e3; --darkreader-inline-bgimage: -webkit-linear-gradient(bottom, #998d00, #998400); --darkreader-inline-bgcolor: initial;" data-darkreader-inline-color="" data-darkreader-inline-bgimage="" data-darkreader-inline-bgcolor="">
<div id="dicLayerContents"> </div>

<div id="dicLayerSub"> </div>
</div>

<div id="dicRawData" style="display: none;"> </div>

