sz = int(input())
dasom = int(input())
others = [0]
for _ in range(sz - 1):
    others.append(int(input()))

cnt = 0
while dasom <= max(others):
    others = sorted(others)
    others[sz - 1] -= 1
    dasom += 1
    cnt += 1
print(cnt)

