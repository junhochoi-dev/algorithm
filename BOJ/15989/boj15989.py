dp = [[0 for i in range(3)] for j in range(10001)]
MOD = 1000000009
dp[1][0] = 1

dp[2][0] = 1
dp[2][1] = 1

dp[3][0] = 1
dp[3][1] = 1
dp[3][2] = 1

for i in range(4, 10001):
    dp[i][0] = dp[i-1][0]
    dp[i][1] = dp[i-2][0] + dp[i-2][1]
    dp[i][2] = dp[i-3][0] + dp[i-3][1] + dp[i-3][2]

sz = int(input())
for _ in range(sz):
    print(sum(dp[int(input())])% MOD)