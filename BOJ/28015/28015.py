N, M = map(int, input().split())
cnt = 0
group = []
for _ in range(N):
    paint = list(map(int, input().split()))
    parse = []
    for i in range(M):
        if paint[i] == 0:
            if parse != []:
                group.append(parse)
            parse = []
        else:
            parse.append(paint[i])
    if parse != []:
        group.append(parse)
wholesum = 0
for g in group:
    cnt = [0, 0]
    init = 0
    for i in range(len(g)):
        if g[i] != init:
            cnt[g[i] - 1] += 1
        init = g[i]
    if 0 in cnt:
        wholesum += 1
    else:
        wholesum += min(cnt) + 1
print(wholesum)