dp = [0 for i in range(491)]
dp[1] = dp[2] = 1
for i in range(3, 491):
    dp[i] = dp[i - 1] + dp[i - 2]
while True:
    x=int(input())
    if x==-1:
        break
    print(f'Hour {x}: {dp[x]} cow(s) affected')