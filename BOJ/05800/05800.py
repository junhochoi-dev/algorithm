tc = int(input())
n = 1
for _ in range(tc):
    l = list(map(int, input().split()))
    sz = l[0]
    l = l[1:]
    print(f'Class {n}')
    n += 1
    gap = 0
    l = sorted(l)
    for i in range(sz):
        if i != 0:
            gap = max(gap, abs(l[i] - l[i-1]))
    print(f'Max {max(l)}, Min {min(l)}, Largest gap {gap}')