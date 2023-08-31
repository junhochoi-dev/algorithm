# BFS & DFS (너비 우선 탐색 & 깊이 우선 탐색)

* visited

``` java
// 1. 1, 2차원 배열
int[] visited = new int[N];
int[][] visited = new int[N][M];

// 2. HashSet 이용
HashSet<Integer> visited = HashSet<Integer>();

// 차원 축소 (N X M 배열의 (x, y))
int location = x * M + y;
```

BFS : 너비우선탐색

```java
// java
Queue<Integer> queue = new ArrayDeque<Integer>();
queue.add(start);
while(!queue.isEmpty()){
    int curr = queue.poll();

    for(int next ...){

    }
}
```

DFS : 깊이우선탐색

```java
// java
void DFS(int curr){
    for(int next : edge.get(curr))
        if(visited.contains(next)) continue;
        ...
    }
}
```

무조건 둘을 혼용해서 쓸 수 있는 것이 아니다.

동시에 함께 접근하는 문제일 경우 BFS로 접근해야한다.

BFS를 인접행렬로 구현하냐?

BFS를 인접리스트로 구현하냐?

- 시간복잡도

인접행렬 : O(V^2)

인접리스트 : O(V+E) -> 인접하지 않은 곳 까지 안봐도 된다

<br><br><br>



# Binary Search (이분탐색)

정렬된 정수의 리스트를 같은 크기의 두 부분 리스트로 나누고 필요한 부분에서만 탐색하도록 제한하여 원하는 원소를 찾는 알고리즘

어떤 정렬된 범위에 해답이 존재할 때, 그 해답을 빨리 찾기위해 이분 탐색을 이용해 빠르게 찾는다.

Parametric Search -> mid에 대한 기준을 생각해봐야한다 무조건 절반 X

가능한 해 구간에 대해서 이분탐색을 하는 방법

최대나 최소에 대해서 값을 구하고자 할 때

- 시간복잡도

O(logN)

```java
// java
int low = 1;
int high = L - 1;
while(low < high){
    int mid = (low + high) / 2;
    int cnt = 0;
    for(int i = 0; i < N + 1; i++){
        cnt += diff.get(i) / mid;
        if(diff.get(i) % mid == 0) cnt--;
    }
    if(cnt <= M) answer = Math.min(answer, mid);
    if(cnt <= M) high = mid;
    if(cnt > M) low = mid + 1;
}
```

<br><br><br>



# Two Pointer(두 포인터)

대상이 두개로 정해져있으면 무조건 한 번은 생각해보기

- 시간복잡도

O(N)

```java
int left = 0;
int right = N - 1;

while(left <= right){
    int mid = (left + right) / 2;
    if(key < mid) right = mid - 1;
    else if(key > mid) left = mid + 1;
    else break;
}
```

<br><br><br>



# DP : Dynamic Programming (동적 계획법)

특정 범위까지의 값을 구하기 위해서 그것과 다른 범위까지의 값을 이용하여 효율적으로 값을 구하는 알고리즘
예전에 것을 이용하여 최적을 구한다

### LIS (Longest Increasing Subsequence) - 최장 증가 부분 수열


### LCS (Longest Common SubSequence) - 최장 공통 수열

전체 문자열에서 꼭 연속된 수열인 것은 아닌 부분 수열

조건을 만족하는 수열이 여러개 존재할 수 있다.

```
// different
dp[i][j] = 0;
// same
dp[i][j] = dp[i - 1][j - 1] + 1;
```

### LCS (Longest Common Substring) - 최장 공통 문자열

전체 문자열에서 연속된 부분 문자열

조건을 만족하는 수열이 여러개 존재할 수 있다.

Knapsack 문제

0-1 KnapSack Problem

<br><br><br>



# Dijkstra (다익스트라)

하나의 정점에서 다른 모든 정점까지의 최단 거리를 구하는 알고리즘

- 시간복잡도

선형 탐색 O(N^2)

힙 O(NlogN)

<br><br><br>



# Bellman Ford (벨만 포드)

<br><br><br>



# Floyd Warshall (플로이드 워셜)

모든 정점에서 다른 모든 정점까지의 최단 거리를 구하는 알고리즘

```java
for(int k = 0; k < N; k++){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(distance[i][k] + distance[k][j] < distance[i][j]) {
                distance[i][j] = distance[i][k] + distance[k][j];
            }
        }
    }
}
```

<br><br><br>



# Union Find

서로소 집합

Find 연산은 하나의 원소가 어떤 집합에 속해있는지를 판단하는 연산

Union 연산은 서로 다른 두 개의 집합을 하나의 집합으로 병합하는 연산

* initialization

``` java
int root[MAX_SIZE];
for (int i = 0; i < MAX_SIZE; i++)
    parent[i] = i;
```

* Find

``` java
int find(int x) {
    if (root[x] == x) {
        return x;
    } else {
        return root[x] = find(root[x]);
    }
}
```

* Union
  
``` java
void union(int x, int y){
    x = find(x);
    y = find(y);
    root[y] = x;
}
```

<br><br><br>



# MST : Minimum Spanning Tree (최소스패닝트리)

신장 트리(Spanning Tree) : N개의 정점으로 이루어진 무방향 그래프에서 N개의 정점과 N - 1 개의 간선으로 이루어진 트리

최소 신장 트리 : 무방향 가중치 그래프에서 신장 트리를 구성하는 간선들의 가중치의 합이 최소인 트리

### Kruskal (크루스칼 알고리즘)

### Prim (프림 알고리즘)

<br><br><br>



# 위상 정렬 (Topological Sort)

- 시간 복잡도

O(V + E)

```java
int[] degree = new int[N + 1];
Queue<Integer> queue = new ArrayDeque<Integer>();
for(int i = 1; i <= N; i++){
    if(degree[i] == 0) queue.add(i);
}
while(!queue.isEmpty()){
    int curr = queue.poll();
    ...
}
```

<br><br><br>



# SegmentTree (세그먼트 트리)

- initialization

```java
// java
int[] arr = new long[N + 1];
int[] segmentTree = new long[1 << ((int)Math.ceil((Math.log(N)/Math.log(2))) + 1)];
```

- init

```java
// java
// func 조건에 맞는 구간 함수
static int init(int left, int right, int node){
    if(left == right) return segmentTree[node] = arr[left];
    int mid = (left + right) / 2;
    return segmentTree[node] = func(init(left, mid, node * 2), init(mid + 1, right, node * 2 + 1));
}
```

- query
``` java
// java
// func 조건에 맞는 구간 함수
static int init(int left, int right, int node, int start, int end){
    ...
    int mid = (left + right) / 2;
    return segmentTree[node] = func(init(left, mid, node * 2), init(mid + 1, right, node * 2 + 1));
}
```

* update
```java
// java
// func 조건에 맞는 구간 함수
static int query(int left, int right, int node, int start, int end){

}
```

4N

Inversion Counting

### Segment Tree with Lazy Propagation (느리게 갱신되는 세그먼트 트리)

<br><br><br>











-------------------- 

간선의 가중치가 모두 같은 그래프일 경우

하나의 정점에서 다른 모든 정점까지 최단경로를 구하는 문제 -간선의 가중치가 모두 같은 그래프일 경우

BFS -간선의 가중치가 각각 다른 그래프일 경우

다익스트라

벨만-포드 → 음수 가중치의 간선이 존재할 때

모든 정점에서 다른 모든 정점까지 최단경로를 구하는 문제

플로이드 와샬

-------------------------
next permutation 다시짜



