N, M = map(int, input().split())
v = []
for _ in range(N - 1):
    tmp = int(input())
    v.append(tmp)

h = list(map(int, input().split()))

v.append(h[0])

print(N - min(h), min(v) + 1)