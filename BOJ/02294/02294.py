INF = 987654321
sz, K = map(int, input().split())
coin = set()
for _ in range(sz):
    coin.add(int(input()))
sz = len(coin)
coin = sorted(list(coin))

dp = [INF for _ in range(K + 1)]

for i in range(sz):
    if K < coin[i]:
        continue
    dp[coin[i]] = 1

for i in range(1, K + 1):
    for j in range(sz):
        if i - coin[j] < 0:
            continue
        dp[i] = min(dp[i - coin[j]] + 1, dp[i])

if dp[K] == INF:
    print(-1)
else:
    print(dp[K])