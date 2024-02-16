sz = int(input())
arr = list(map(int, input().split()))

dp = [1 for _ in range(sz)]

for curr in range(1, sz):
    for prev in range(curr):
        if arr[curr] < arr[prev] and dp[curr] < dp[prev] + 1:
            dp[curr] = dp[prev] + 1

print(max(dp))