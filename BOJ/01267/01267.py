sz = int(input())
cost = list(map(int, input().split()))
y = 0
m = 0
for c in cost:
    y += (c // 30 + 1) * 10
    m += (c // 60 + 1) * 15
if y < m:
    print('Y', end=' ')
elif y > m:
    print('M', end=' ')
else:
    print('Y M', end=' ')
print(min(y, m))