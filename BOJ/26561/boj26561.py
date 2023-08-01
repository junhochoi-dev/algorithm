sz = int(input())
for _ in range(sz):
    p, t = map(int, input().split())
    print(p - t // 7 + t // 4)