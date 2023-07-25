tc = int(input())
dp = [0 for _ in range(45 + 1)]
dp[0] = dp[1] = 1
for i in range(2, 45 + 1):
    dp[i] = dp[i - 1] + dp[i - 2]
for _ in range(tc):
    print(dp[int(input())])