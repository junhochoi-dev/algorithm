sz = int(input())
weight = [0] + list(map(int, input().split()))
happy = [0] + list(map(int, input().split()))
dp = [[0 for i in range(100 + 1)] for j in range(sz + 1)]

for i in range(1, sz + 1):
    for j in range(1, 100 + 1):
        if j < weight[i] + 1:
            dp[i][j] = dp[i - 1][j]
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + happy[i])

print(dp[sz][100])
