N = int(input())
dp = [[0 for _ in range(10)] for n in range(N + 1)]

for num in range(10):
    dp[1][num] = 1
for n in range(2, N + 1):
    for curr in range(1, 10):
        for prev in range(curr, 10):
            dp[n][curr] += dp[n - 1][prev]
ans = 0
for i in range(1, N + 1):
    ans += sum(dp[i])
print(ans % 10007)