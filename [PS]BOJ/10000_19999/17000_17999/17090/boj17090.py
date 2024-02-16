delta = {
    'D': [1, 0],    'U': [-1, 0],
    'R': [0, 1],    'L': [0, -1]
}
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
cnt = 0
N, M = map(int, input().split())
visited = [[False for i in range(M)] for j in range(N)]
table = []
for _ in range(N):
    table.append(list(input()))

able = []
for i in range(N):
    if table[i][0] == 'L':
        able.append([i, 0])
    if table[i][M - 1] == 'R':
        able.append([i, M - 1])

for i in range(M):
    if table[0][i] == 'U':
        able.append([0, i])
    if table[N - 1][i] == 'D':
        able.append([N - 1, i])

def dfs(x, y):
    global cnt
    cnt += 1
    visited[x][y] = True
    for k in range(4):
        tx = x + dx[k]
        ty = y + dy[k]
        if tx < 0 or ty < 0 or tx >= N or ty >= M: continue
        if visited[tx][ty]: continue
        if x == tx + delta[table[tx][ty]][0] and y == ty + delta[table[tx][ty]][1]: dfs(tx, ty)

ans = 0
for row, col in able:
    cnt = 0
    if visited[row][col]: continue
    dfs(row, col)
    ans += cnt

print(ans)