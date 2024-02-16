sz = int(input())
card = list(map(int, input().split()))
dp = [0 for _ in range(sz + 1)]
for i in range(1, sz + 1):
    for j in range(sz):
        cnt = j + 1
        if i < cnt:
            break
        dp[i] = max(dp[i - cnt] + card[j], dp[i])
print(dp[sz])
