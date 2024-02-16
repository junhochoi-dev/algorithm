d1, d2, x = map(int, input().split())
w1, w2 = 0, 0
if d1 > d2:
    w1 = x
    w2 = 100 - x
else:
    w2 = x
    w1 = 100 - x

v1 = w1 / d1
v2 = w2 / d2

print((w1 + w2) / (v1 + v2))