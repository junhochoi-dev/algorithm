sz = int(input())
sum = 0
for _ in range(sz):
    curr, need, cost = map(int, input().split())
    if need > curr:
        sum += (need - curr) * cost
print(sum)