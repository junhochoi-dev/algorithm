cnt = 0
s = input()
MOD = 10 ** 9 + 7
for i in range(len(s)):
    if s[i] == 'O':
        cnt += 2 ** i
        cnt %= MOD
print(cnt)