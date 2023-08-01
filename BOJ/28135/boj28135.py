num = int(input())
cnt = 0
for n in range(1, num + 2):
    cnt += 1
    if n == num:
        break
    if '50' in str(n):
        cnt += 1
print(cnt)