n = int(input())
x = n // 2
y = n - x
cnt = 0
while x < 100 and y < 100:
    if x == y:
        cnt += 1
    else:
        cnt += 2
    x -= 1
    y += 1
print(cnt)