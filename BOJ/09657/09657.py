order = int(input())
dp = list(range(1001))
dp[1] = dp[3] = dp[4] = 1
dp[2] = 0
for i in range(5, order + 1):
    if dp[i - 1] == 0 or dp[i - 3] == 0 or dp[i - 4] == 0:
        dp[i] = 1
    else:
        dp[i] = 0
if dp[order]:
    print('SK')
else:
    print('CY')