sz=int(input())
for _ in range(sz):
    a,b,c,p=map(int, input().split())
    cnt = 0
    if a % p == 0: cnt += 1
    if b % p == 0: cnt += 1
    if c % p == 0: cnt += 1
    if cnt >= 2: print(1)
    else: print(0)