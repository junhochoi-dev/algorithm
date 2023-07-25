N, K = map(int, input().split())
dp = [[0 for i in range(K + 1)] for j in range(N + 1)]
MOD = 1000000000

for i in range(N + 1):
    dp[i][1] = 1

for num in range(N + 1):
    for cnt in range(2, K + 1):
        for gap in range(num + 1):
            dp[num][cnt] += dp[num - gap][cnt - 1]
            dp[num][cnt] %= MOD

print(dp[N][K] % MOD)