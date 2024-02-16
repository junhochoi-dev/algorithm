s = input()
sz = len(s)
palindrome = [[False for n in range(sz)] for m in range(sz)]

for n in range(sz):
    palindrome[n][n] = True
    if n != 0 and s[n] == s[n - 1]:
        palindrome[n - 1][n] = True

for i in range(1, sz - 1):
    for dis in range(1, min(i + 1, sz - i)):
        start = i - dis
        end = i + dis
        if palindrome[start + 1][end - 1] and s[start] == s[end]:
            palindrome[start][end] = True
        else:
            break
for i in range(1, sz - 2):
    for dis in range(1, min(i + 1, sz - 1 - i)):
        start = i - dis
        end = i + 1 + dis
        if palindrome[start + 1][end - 1] and s[start] == s[end]:
            palindrome[start][end] = True
        else:
            break

inf = 987654321
dp = [0 for _ in range(sz + 1)]
for e in range(1, sz + 1):
    dp[e] = inf
    for s in range(1, e + 1):
        if palindrome[s - 1][e - 1]:
            dp[e] = min(dp[s - 1] + 1, dp[e])

print(dp[sz])