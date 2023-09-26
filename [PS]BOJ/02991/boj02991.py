a, b, c, d = map(int, input().split())
x = list(map(int, input().split()))

for i in range(3):
    cnt = 0
    tmp = x[i] % (a + b)
    if 0 < tmp and tmp <= a:
        cnt += 1
    tmp = x[i] % (c + d)
    if 0 < tmp and tmp <= c:
        cnt += 1
    print(cnt)