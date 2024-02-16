sz = int(input())
while sz:
    sz -= 1
    n = int(input())
    sr = str(n**2)
    if str(n) == sr[-len(str(n)):]:
        print('YES')
    else:
        print('NO')
