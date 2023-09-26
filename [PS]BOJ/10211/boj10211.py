tc = int(input())
for _ in range(tc):
    sz = int(input())
    arr = list(map(int, input().split()))
    dp = [0 for i in range(sz)]
    dp[0] = arr[0]
    for i in range(1, sz):
        dp[i] = max(dp[i - 1] + arr[i], arr[i])
    print(max(dp))