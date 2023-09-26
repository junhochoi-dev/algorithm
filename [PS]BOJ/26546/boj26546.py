sz = int(input())
for _ in range(sz):
    str, s, e = input().split()
    s = int(s)
    e = int(e)
    print(str[:s], str[e:], sep='')