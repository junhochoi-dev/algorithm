from collections import deque

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def ptos(p):
    s = ""
    for i in range(3):
        for j in range(3):
            s += p[i][j]
    return s
def stop(s):
    p = []
    for i in range(3):
        tmp = []
        for j in range(3):
            tmp.append(s[i * 3 + j])
        p.append(tmp)
    return p
def findzero(p):
    for i in range(3):
        for j in range(3):
            if p[i][j] == '0':
                return i, j

def bfs(p):
    cnt = 987654321
    answer = '123456780'
    dict = {}
    que = deque()
    que.append(ptos(p))
    dict[ptos(p)] = 0
    while len(que) != 0:
        curr = que.popleft()
        if curr == answer:
            cnt = min(dict[curr], cnt)
            continue
        pos = curr.find('0')
        zx = pos // 3
        zy = pos % 3
        for k in range(4):
            tx = zx + dx[k]
            ty = zy + dy[k]
            if tx < 0 or ty < 0 or tx >= 3 or ty >= 3:
                continue
            next = list(curr)
            next[tx * 3 + ty], next[zx * 3 + zy] = next[zx * 3 + zy],  next[tx * 3 + ty]
            next = ''.join(next)


            if not dict.get(next):
                que.append(next)
                dict[next] = dict[curr] + 1
    return cnt

puzzle = [input().split() for _ in range(3)]
ans = bfs(puzzle)
if ans == 987654321:
    print(-1)
else:
    print(ans)