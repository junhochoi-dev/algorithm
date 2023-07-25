tc = int(input())
for _ in range(tc):
    sz = int(input())
    arr = []
    tmp = list(map(int, input().split()))
    arr.append(tmp)
    tmp = list(map(int, input().split()))
    arr.append(tmp)

    dp = [[0 for i in range(sz)] for j in range(2)]

    dp[0][0] = arr[0][0]
    dp[1][0] = arr[1][0]

    if sz >= 2:
        dp[0][1] = arr[0][1] + arr[1][0]
        dp[1][1] = arr[1][1] + arr[0][0]

    for i in range(2, sz):
        dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + arr[0][i]
        dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + arr[1][i]

    print(max(dp[0][sz - 1], dp[1][sz - 1]))