while True:
    inp = input()
    if inp == '0':
        break
    b, p, m = inp.split()
    b = int(b)
    p = int(p, b) % int(m, b)
    ans = []
    while p >= b:
        ans.append(p % b)
        p //= b
    ans.append(p)
    ans.reverse()
    print(*ans, sep='')
