sz = int(input())
lemon = list(map(int, input().split()))
for i in range(sz):
    lemon[i] -= sz - i
print(max(lemon))