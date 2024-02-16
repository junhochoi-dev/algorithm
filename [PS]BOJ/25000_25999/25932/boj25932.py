sz = int(input())
for _ in range(sz):
    l = list(map(int, input().split()))
    s = set(l)
    print(*l)
    if 17 in s and 18 in s:
        print('both')
    elif 17 in s:
        print('zack')
    elif 18 in s:
        print('mack')
    else:
        print('none')
    print()