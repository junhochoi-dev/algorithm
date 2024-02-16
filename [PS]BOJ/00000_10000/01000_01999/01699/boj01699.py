import math
dp = list(range(100001))
N = int(input())
for n in range(1, N + 1):
    for m in range(1, int(math.sqrt(n)) + 1):
        dp[n] = min(dp[n], dp[n - m * m] + 1)
print(dp[N])