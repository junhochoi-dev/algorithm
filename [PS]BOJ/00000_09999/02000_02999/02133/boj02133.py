dp=[0 for i in range(31)]
dp[0] = 1
dp[2] = 3
for i in range(4, 31, 2):
    dp[i] += dp[i - 2] * 3
    for j in range(4, i + 1, 2):
        dp[i] += dp[i - j] * 2
N=int(input())
print(dp[N])