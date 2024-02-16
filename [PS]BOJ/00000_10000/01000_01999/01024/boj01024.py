N, L = map(int, input().split())
x = 0
check = False
while True:
    if N - (L - 1) * L // 2 < 0 or L > 100:
        break
    if (N - (L - 1) * L // 2) % L == 0:
        x = (N - (L - 1) * L // 2) // L
        for k in range(x, x + L):
            print(k, end=' ')
            check = True
        break
    L += 1
if not check:
    print(-1)