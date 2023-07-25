sz, std = map(int, input().split())
item = [[0, 0]]
for _ in range(sz):
    w, v = map(int, input().split())
    item.append([w, v])
item = sorted(item)
dp = [[0 for i in range(std + 1)] for j in range(sz + 1)]

for i in range(1, sz + 1):
    for j in range(1, std + 1):
        weight, value = item[i]
        if j < weight:
            dp[i][j] = dp[i - 1][j]
        else:
            dp[i][j] = max(dp[i - 1][j - weight] + value, dp[i - 1][j])

print(dp[sz][std])