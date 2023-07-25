h1, b1 = map(int, input().split())
h2, b2 = map(int, input().split())
p1 = h1 * 3 + b1
p2 = h2 * 3 + b2
if p1 > p2:
    print(1, p1 - p2)
elif p2 > p1:
    print(2, p2 - p1)
else:
    print('NO SCORE')