sz = int(input())
dp = [[0, 0, 0] for _ in range(sz)]
dp[0][0] = dp[0][1] = dp[0][2] = 1
MOD = 9901
for i in range(1, sz):
    dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD
    dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MOD
    dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % MOD

print(sum(dp[sz - 1]) % MOD)