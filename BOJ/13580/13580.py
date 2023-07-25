t = list(map(int, input().split()))
t = sorted(t)
if t[0] == t[1] or t[1] == t[2] or t[0] + t[1] == t[2]:
    print('S')
else:
    print('N')