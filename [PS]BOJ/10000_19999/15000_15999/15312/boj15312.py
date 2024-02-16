alpha=[3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]
a=input()
b=input()
dp = []
for i in range(len(a)):
    dp.append(alpha[ord(a[i]) - ord('A')])
    dp.append(alpha[ord(b[i]) - ord('A')])
for i in range(len(a) * 2 - 2):
    for j in range(len(a) * 2 - 1 - i):
        dp[j] = (dp[j] + dp[j + 1]) % 10
print(*dp[0:2], sep='')