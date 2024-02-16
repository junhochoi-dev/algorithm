dp = [0 for i in range(251)]
dp[0] = dp[1] = 1
for i in range(2, 251):
    dp[i] = dp[i - 1] + dp[i - 2] * 2
while True:
    try:
        print(dp[int(input())])
    except:
        break