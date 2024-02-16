import sys
input = sys.stdin.readline

N = int(input())
a = list(map(int, input().split()))
dpu = [1 for _ in range(N)]
dpu[0] = 1
for i in range(N):
    for j in range(i):
        if a[i] > a[j]:
            dpu[i] = max(dpu[i], dpu[j] + 1)
        if a[i] > a[j]:
            dpu[i] = max(dpu[i], dpu[j] + 1)

dpd = [1 for _ in range(N)]
dpd[N - 1] = 1
for i in range(N - 1, -1, -1):
    for j in range(i + 1, N):
        if a[i] > a[j]:
            dpd[i] = max(dpd[i], dpd[j] + 1)
        if a[i] > a[j]:
            dpd[i] = max(dpd[i], dpd[j] + 1)

maximum = -1
for i in range(N):
    maximum = max(maximum, dpu[i] + dpd[i] - 1)
print(maximum)