sz=int(input())
ar=list(map(int, input().split()))
ans = 0
if len(ar) == 1:
    ans += ar[0]
else:
    while True:
        ar=sorted(ar)
        if ar[-1] == 0 or ar[-2] == 0:
            break
        tmp = min(ar[-1], ar[-2])
        ans += tmp
        ar[-1] -= tmp
        ar[-2] -= tmp
    ans += ar[-1]
if ans > 1440:
    print(-1)
else:
    print(ans)

