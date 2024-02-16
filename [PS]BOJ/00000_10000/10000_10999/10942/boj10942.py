import sys
sz = int(sys.stdin.readline())
num = list(map(int, sys.stdin.readline().split()))
dp = [[False for i in range(sz)] for i in range(sz)]

for k in range(sz):
    dp[k][k] = True

for k in range(sz - 1):
    if num[k] == num[k + 1]:
        dp[k][k + 1] = True
for i in range(sz):
    for k in range(sz // 2):
        w = k + 1
        if i - w >= 0 and i + w < sz:
            if dp[i - w + 1][i + w - 1] and num[i - w] == num[i + w]:
                dp[i - w][i + w] = True
        if i - w >= 0 and i + 1 + w < sz:
            if dp[i - w + 1][i + w] and num[i - w] == num[i + w + 1]:
                dp[i - w][i + w + 1] = True
        else:
            break

tc = int(sys.stdin.readline())
for _ in range(tc):
    s, e = map(int, sys.stdin.readline().split())
    if dp[s - 1][e - 1]:
        print(1)
    else:
        print(0)