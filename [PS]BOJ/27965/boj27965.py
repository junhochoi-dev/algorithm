N, K = map(int, input().split())
num = 0
idx = 0
for i in range(1, N + 1):
    if 10 ** idx == i:
        idx += 1
    num *= 10 ** idx
    num += i
    num %= K
print(num)