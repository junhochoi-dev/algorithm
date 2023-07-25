dp = [[0 for i in range(3)] for j in range(100001)]
dp[1][0] = 1
dp[2][1] = 1
dp[3][0] = 1
dp[3][1] = 1
dp[3][2] = 1

MOD = 1000000009

for i in range(4, 100001):
    dp[i][0] = (dp[i-1][1] + dp[i-1][2]) % MOD
    dp[i][1] = (dp[i-2][0] + dp[i-2][2]) % MOD
    dp[i][2] = (dp[i-3][0] + dp[i-3][1]) % MOD

sz = int(input())
for _ in range(sz):
    print(sum(dp[int(input())]) % MOD)