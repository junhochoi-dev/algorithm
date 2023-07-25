n, m = map(int, input().split())
if n - 7 > 0:
    print(n - 7)
else:
    prev_day = m + 14 - n
    print(prev_day + n - 7)