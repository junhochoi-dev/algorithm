import sys
input = sys.stdin.readline
y, m, d = map(int, input().split())
sy, sm, sd = map(int, input().split())
onlyage = sy - y
if m > sm or (m == sm and d > sd):
    onlyage -= 1
print(onlyage)
print(sy - y + 1)
print(sy - y)