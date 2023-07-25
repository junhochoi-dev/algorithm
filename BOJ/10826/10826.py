dp=[0 for i in range(10001)]
dp[1] = 1
for i in range(2, 10001):
    dp[i] = dp[i - 1] + dp[i - 2]
print(dp[int(input())])