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

s = ""
maximum = max(max(dp))
for i in range(len(s2) + 1):
    n = len(s2) - i
    for j in range(len(s1) + 1):
        m = len(s1) - j
        if dp[n][m] == maximum and dp[n - 1][m] < dp[n][m] and dp[n][m - 1] < dp[n][m]:
            s += s2[n - 1]
            maximum -= 1
            break
rs = ""
for w in s:
    rs = w + rs
print(max(max(dp)))
if max(max(dp)) > 0:
    print(rs)