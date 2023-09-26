from math import *

MAXSIZE = 500 + 1
MAXLINE = 0

dp = [[0 for i in range(MAXSIZE)] for j in range(MAXSIZE)]
line = [[0 for i in range(MAXSIZE)] for j in range(MAXSIZE)]

sz = int(input())
for _ in range(sz):
    left, right = map(int, input().split())
    line[left][right] = 1
    MAXLINE = max(MAXLINE, max(left, right))

for left in range(1, MAXSIZE):
    for right in range(1, MAXSIZE):
        dp[left][right] = max(dp[left - 1][right - 1], max(dp[left][right - 1], dp[left - 1][right]))
        if line[left][right] == 1:
            dp[left][right] += 1

print(sz - dp[MAXLINE][MAXLINE])