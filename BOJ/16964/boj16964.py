route = dict()
idx = 0
answer = True
visited_cnt = 0

def DFS(curr):
    global visited_cnt, idx
    visited[curr - 1] = True
    visited_cnt += 1
    while True:
        if not idx < N:
            break
        next = std_ans[idx]
        if not next in route[curr]:
            break
        if visited[next - 1]:
            break
        idx += 1
        DFS(next)

N = int(input())
visited = [False for _ in range(N)]
for _ in range(N - 1):
    s, e = map(int, input().split())
    if not s in route.keys():
        route[s] = []
    route[s].append(e)
    if not e in route.keys():
        route[e] = []
    route[e].append(s)
std_ans = list(map(int, input().split()))


if std_ans[idx] == 1:
    idx += 1
    DFS(1)
else:
    answer = False

if visited_cnt != N:
    answer = False

print(1 if answer else 0)
