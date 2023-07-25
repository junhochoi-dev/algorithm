import sys
N, L = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))
tmp = [0 for _ in range(L)]
a = tmp + a
rangesum = 0
cnt = 0
for i in range(L, len(a)):
    rangesum += a[i]
    rangesum -= a[i - L]
    std = rangesum * 0.001
    if std >= 0.129 and std <= 0.138:
        cnt += 1
print(cnt)