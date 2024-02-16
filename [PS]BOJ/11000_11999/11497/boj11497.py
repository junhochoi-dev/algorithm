tc = int(input())
for _ in range(tc):
    sz = int(input())
    arr = list(map(int, input().split()))
    arr = sorted(arr)
    f = []
    b = []
    for i in range(sz):
        if i % 2 == 0:
            f.append(arr[i])
        else:
            b.append(arr[i])
    gap = -1
    for i in range(1, len(f)):
        gap = max(gap, abs(f[i]-f[i-1]))
    for i in range(1, len(b)):
        gap = max(gap, abs(b[i]-b[i-1]))
    gap = max(gap, abs(f[-1] - b[-1]))
    gap = max(gap, abs(f[0] - b[0]))
    print(gap)