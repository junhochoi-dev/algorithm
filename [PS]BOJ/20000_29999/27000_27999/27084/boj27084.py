sz=int(input())
l=list(map(int, input().split()))
cnt = [0 for _ in range(sz)]
for k in l:
    cnt[k-1] += 1
sum = 1
for k in cnt:
    sum *= k + 1
    sum %= 10**9 + 7
print(sum - 1)