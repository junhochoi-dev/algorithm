tc = int(input())
for _ in range(tc):
    n, s, d = map(int, input().split())
    wsum = 0
    for i in range(n):
        di, vi = map(int, input().split())
        if di / s <= d:
            wsum += vi
    print(f'Data Set {_ + 1}:')
    print(wsum)
    print()