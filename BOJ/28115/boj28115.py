sz = int(input())
a = list(map(int, input().split()))
if len(a) == 1:
    print('YES')
    print(a[0])
    print(0)
else:
    check = True
    gap = a[1] - a[0]
    for n in range(1, sz):
        if a[n] - a[n - 1] != gap:
            check = False
            break
    if check:
        d1 = a[1] - a[0] - 1
        d2 = 1
        i1 = a[0] - 1
        i2 = 1
        print('YES')
        for n in range(sz):
            print(i1 + d1 * n,end=' ')
        print()
        for n in range(sz):
            print(i2 + d2 * n,end=' ')
    else:
        print('NO')
