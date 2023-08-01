sz=int(input())
l=list(map(int, input().split()))
prev=-1
sum = 0
for k in l:
    if prev == -1 or k - prev != 1:
        sum += k
    prev = k
print(sum)