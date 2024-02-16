N, L, D = map(int, input().split())
sum = -1
listen = 999999
for i in range(N):
    sum += L
    for j in range(5):
        sum += 1
        if sum % D == 0:
            listen = min(listen, sum)
n = 1
while True:
    if sum < D * n:
        listen = min(listen, D * n)
        break
    n += 1
print(listen)
