dp = [i for i in range(300001)]
set = []
k = 1
while True:
    tmp = ((k**3) + 3*(k**2) + 2*k)//6
    if tmp > 300000:
        break
    set.append(tmp)
    dp[tmp] = 1
    k += 1
N = int(input())
for i in range(1, N + 1):
    for j in set:
        if j > i:
            break
        if i==j:
            dp[i] = 1
        dp[i] = min(dp[i], dp[i - j] + 1)

print(dp[N])