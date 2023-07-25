sz = int(input())
for _ in range(sz):
    n = int(input())
    s = list(bin(n)[2:])
    s.reverse()
    for i in range(len(s)):
        if s[i] == '1':
            print(i, end=' ')
