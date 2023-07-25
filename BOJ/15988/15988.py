dp = [0 for _ in range(1000001)]
MOD = 1000000009
dp[1] = 1
dp[2] = 2
dp[3] = 4

for i in range(4, 1000001):
    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD

sz = int(input())
for _ in range(sz):
    print(dp[int(input())]% MOD)