SIZE = 1000000
INF = 987654321
dp = [0 for _ in range(SIZE + 1)]
for k in range(SIZE):
    i = k + 1
    dp[i] = dp[i - 1] + 1
    if i % 2 == 0:
        dp[i] = min(dp[i], dp[i // 2] + 1)
    if i % 3 == 0:
        dp[i] = min(dp[i], dp[i // 3] + 1)

N = int(input())
l = []
l.append(N)
while N != 1:
    x3 = INF
    x2 = INF
    m1 = dp[N - 1]
    if N % 3 == 0:
        x3 = dp[N // 3]
    if N % 2 == 0:
        x2 = dp[N // 2]
    if m1 <= x2 and m1 <= x3:
        N -= 1
    elif x2 <= m1 and x2 <= x3:
        N //= 2
    elif x3 <= m1 and x3 <= x2:
        N //= 3
    l.append(N)
print(len(l) - 1)
print(*l)