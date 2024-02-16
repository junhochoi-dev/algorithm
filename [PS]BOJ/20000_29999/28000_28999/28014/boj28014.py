sz = int(input())
top = list(map(int, input().split()))
cnt = 1
for i in range(1, sz):
    if top[i] >= top[i - 1]:
        cnt += 1
print(cnt)