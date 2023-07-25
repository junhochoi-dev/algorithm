sz = int(input())
cost = []
inf = 987654321
ans = inf
for _ in range(sz):
    r, g, b = map(int, input().split())
    cost.append([r, g, b])

for start_color in range(3):
    dp = [[inf, inf, inf] for _ in range(sz)]
    dp[0][start_color] = cost[0][start_color]
    for n in range(1, sz):
        dp[n][0] = min(dp[n - 1][1], dp[n - 1][2]) + cost[n][0]
        dp[n][1] = min(dp[n - 1][0], dp[n - 1][2]) + cost[n][1]
        dp[n][2] = min(dp[n - 1][0], dp[n - 1][1]) + cost[n][2]
    for color in range(3):
        if color != start_color:
            ans = min(ans, dp[sz - 1][color])
print(ans)