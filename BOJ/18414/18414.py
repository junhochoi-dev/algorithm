import sys
input = sys.stdin.readline

x, l, r = map(int, input().split())
gap = 9876543210
value = -1
for v in range(l, r + 1):
    if abs(x - v) < gap:
        gap = abs(x - v)
        value = v
print(value)