ssum = 0
N, m = map(int, input().split())
N -= m
d = 1
while d * d <= N:
    if N % d == 0:
        if m < d:
            ssum += d
        if m < N // d and N // d != d:
            ssum += N // d
    d += 1
print(ssum)