N, L = map(int, input().split())
n = 0
cnt = 0
while True:
    n += 1
    if str(L) in str(n):
        continue
    cnt += 1
    if cnt == N:
        print(n)
        break