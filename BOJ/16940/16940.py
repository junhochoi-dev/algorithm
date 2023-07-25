import sys
from collections import deque
input = sys.stdin.readline

idx = 0
answer = True
visited_cnt = 0

def BFS(start):
    global visited_cnt, idx
    visited[start] = True
    queue = deque()
    queue.append(start)
    while len(queue):
        visited_cnt += 1
        curr = queue.popleft()
        while idx < N:
            next = std_ans[idx]
            if not next in route[curr]:
                break
            if visited[next]:
                break
            idx += 1
            visited[next] = True
            queue.append(next)

N = int(input())
route = {n: set() for n in range(1, N + 1)}
visited = [False for _ in range(N + 1)]
for _ in range(N - 1):
    s, e = map(int, input().split())
    route[s].add(e)
    route[e].add(s)
std_ans = list(map(int, input().split()))

if std_ans[idx] == 1:
    idx += 1
    BFS(1)
else:
    answer = False

if visited_cnt != N:
    answer = False

print(1 if answer else 0)
