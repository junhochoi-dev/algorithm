## BFS & DFS (너비 우선 탐색 & 깊이 우선 탐색)

BFS : 너비우선탐색
DFS : 깊이우선탐색

무조건 둘을 혼용해서 쓸 수 있는 것이 아니다.

동시에 함께 접근하는 문제일 경우 BFS로 접근해야한다.

BFS를 인접행렬로 구현하냐?

BFS를 인접리스트로 구현하냐?

- 시간복잡도

인접행렬 : O(V^2)

인접리스트 : O(V+E) -> 인접하지 않은 곳 까지 안봐도 된다

<br><br><br>



## Binary Search (이분탐색)

정렬된 정수의 리스트를 같은 크기의 두 부분 리스트로 나누고 필요한 부분에서만 탐색하도록 제한하여 원하는 원소를 찾는 알고리즘

어떤 정렬된 범위에 해답이 존재할 때, 그 해답을 빨리 찾기위해 이분 탐색을 이용해 빠르게 찾는다.

- 시간복잡도

O(logN)

<br><br><br>



## Two Pointer(두 포인터)

대상이 두개로 정해져있으면 무조건 한 번은 생각해보기

- 시간복잡도

O(N)

<br><br><br>



## DP : Dynamic Programming (동적 계획법)

특정 범위까지의 값을 구하기 위해서 그것과 다른 범위까지의 값을 이용하여 효율적으로 값을 구하는 알고리즘
예전에 것을 이용하여 최적을 구한다

LIS (Longest Increasing Subsequence) - 최장 증가 부분 수열

<br><br><br>



## 다익스트라

하나의 정점으로부터 나머지 정점까지의 최단거리를 구하는 알고리즘

- 시간복잡도

선형 탐색 O(N^2)

힙 O(NlogN)

<br><br><br>



## SegmentTree (세그먼트 트리)


```java
int[] arr = new long[N + 1];
int[] segmentTree = new long[1 << ((int)Math.ceil((Math.log(N)/Math.log(2))) + 1)];
```

```java
// func 조건에 맞는 구간 함수
static int init(int left, int right, int node){
    if(left == right) return segmentTree[node] = arr[left];
    int mid = (left + right) / 2;
    return segmentTree[node] = func(init(left, mid, node * 2), init(mid + 1, right, node * 2 + 1));
}
```
4N

Inversion Counting

