sz=int(input())
for _ in range(sz):
    s = input()
    p = [0 for _ in range(8)]
    for k in range(38):
        num = ''
        if s[k] == 'H':
            num += '1'
        else:
            num += '0'
        if s[k+1] == 'H':
            num += '1'
        else:
            num += '0'
        if s[k+2] == 'H':
            num += '1'
        else:
            num += '0'
        p[int(num, 2)] += 1
    print(*p)