h, N = map(int, input().split())
time = 1
while time <= N:
    if h % 2 == 0:
        h = (h // 2) ^ 6
    else:
        h = (2 * h) ^ 6
    time += 1

print(h)