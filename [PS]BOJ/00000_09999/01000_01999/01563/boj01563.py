# 지각O
    #출석     0
    #결석1    1
    #결석2    2
# 지각1
    #지각     3
    #출석     4
    #결석1    5
    #결석2    6

MOD = 1000000
N = int(input())
dp = [[0 for i in range(N)] for j in range(7)]
dp[0][0] = dp[1][0] = dp[3][0] = 1

for curr in range(1, N):
    prev = curr - 1
    dp[0][curr] = dp[0][prev] + dp[1][prev] + dp[2][prev]
    dp[1][curr] = dp[0][prev]
    dp[2][curr] = dp[1][prev]

    dp[3][curr] = dp[0][prev] + dp[1][prev] + dp[2][prev]
    dp[4][curr] = dp[3][prev] + dp[4][prev] + dp[5][prev] + dp[6][prev]
    dp[5][curr] = dp[3][prev] + dp[4][prev]
    dp[6][curr] = dp[5][prev]

ans = 0
for i in range(7):
    ans += dp[i][N - 1]
print(ans % MOD)