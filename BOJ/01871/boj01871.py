sz=int(input())
for i in range(sz):
    f, e = input().split('-')
    v = (ord(f[0])-ord('A')) * 26 ** 2 + (ord(f[1])-ord('A')) * 26 + (ord(f[2])-ord('A'))
    if abs(v - int(e)) <= 100:
        print('nice')
    else:
        print('not nice')