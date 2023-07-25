s1 = input()
s2 = input()
dp = [[0 for i in range(len(s1) + 1)] for j in range(len(s2) + 1)]
for n in range(len(s2)):
    for m in range(len(s1)):
        i = n + 1
        j = m + 1
        top = dp[i-1][j]
        left = dp[i][j - 1]
        if s2[n] == s1[m]:
            dp[i][j] = dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(top, left)
print(max(max(dp)))