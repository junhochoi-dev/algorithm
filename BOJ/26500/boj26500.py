sz = int(input())
for _ in range(sz):
    a, b = map(float, input().split())
    print(round(abs(a - b), 1))